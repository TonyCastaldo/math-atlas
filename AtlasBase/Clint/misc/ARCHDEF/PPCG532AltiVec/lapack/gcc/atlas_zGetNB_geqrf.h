#ifndef ATL_zGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,96,144,192,384,768,1152,1344,1440,1488,1536
 * N : 25,96,144,192,384,768,1152,1344,1440,1488,1536
 * NB : 4,12,12,48,48,48,48,96,96,96,288
 */
#define ATL_zGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 60) (nb_) = 4; \
   else if ((n_) < 168) (nb_) = 12; \
   else if ((n_) < 1248) (nb_) = 48; \
   else if ((n_) < 1512) (nb_) = 96; \
   else (nb_) = 288; \
}


#endif    /* end ifndef ATL_zGetNB_geqrf */
