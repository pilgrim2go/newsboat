#ifndef NEWSBOAT_RS_UTILS_H_
#define NEWSBOAT_RS_UTILS_H_

#ifdef __cplusplus
extern "C" {
#endif

char* rs_replace_all(
		const char* str,
		const char* from,
		const char* to);

void rs_cstring_free(char* str);

#ifdef __cplusplus
}
#endif

#endif /* NEWSBOAT_RS_UTILS_H_ */
