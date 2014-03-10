static char* heap_listp;

static void *find_fit(size_t asize)
{
    void *bp;
    for (bp = heap_listp; GET_SIZE(HDRP(bp)) > 0; bp = NEXT_BLKP(bp)) {
        if (!GET_ALLOC(HDRP(bp)) && (asize <= GET_SIZE(HDRP(bp)))) {
            return bp;
        }
    } 
    
    return NULL;
}    

static void place(void *bp, size_t asize)
{
    // Get the free size. 
    size_t fsize = GET_SIZE(HDRP(bp));

    // Decide we need to split.
    if (fsize - asize >= 2 * WSIZE) {
        // Split case.
        PUT(HDRP(bp), PACK(asize, 1));
        PUT(FTRP(bp), PACK(asize, 1));
        PUT(HDRP(NEXT_BLKP(bp)), PACK((fsize-asize), 0));
        PUT(FTRP(NEXT_BLKP(bp)), PACK((fsize-asize), 0));     
    } else {
        // Non split case.
        PUT(HDRP(bp), PACK(fsize, 1));
        PUT(FTRP(bp), PACK(fsize, 1));
    }
}
