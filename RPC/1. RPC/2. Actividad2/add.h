/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define ADD_PROG 0x23451111
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  char ** add_1(char **, CLIENT *);
extern  char ** add_1_svc(char **, struct svc_req *);
#define SEARCH 2
extern  char ** search_1(char **, CLIENT *);
extern  char ** search_1_svc(char **, struct svc_req *);
extern int add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  char ** add_1();
extern  char ** add_1_svc();
#define SEARCH 2
extern  char ** search_1();
extern  char ** search_1_svc();
extern int add_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
