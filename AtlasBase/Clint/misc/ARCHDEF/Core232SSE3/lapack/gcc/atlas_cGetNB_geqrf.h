#ifndef ATL_cGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,216,432,936,1944
 * N : 25,216,432,936,1944
 * NB : 9,72,72,72,72
 */
#define ATL_cGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 120) (nb_) = 9; \
   else (nb_) = 72; \
}


#endif    /* end ifndef ATL_cGetNB_geqrf */
