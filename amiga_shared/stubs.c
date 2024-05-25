#include <stdarg.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <proto/fontconfig.h>
#include <stdarg.h>

#include <fontconfig/fontconfig.h>
#include <freetype/freetype.h>
#include <fontconfig/fcfreetype.h>

uint32 _impl_Obtain(struct FontconfigIFace *Self)
{
	uint32 res;
	__asm__ __volatile__(
		"1:	lwarx	%0,0,%1\n"
		"addic	%0,%0,1\n"
		"stwcx.	%0,0,%1\n"
		"bne-	1b"
		: "=&r"(res)
		: "r"(&Self->Data.RefCount)
		: "cc", "memory");

	return res;
}

uint32 _impl_Release(struct FontconfigIFace *Self)
{
	uint32 res;
	__asm__ __volatile__(
		"1:	lwarx	%0,0,%1\n"
		"addic	%0,%0,-1\n"
		"stwcx.	%0,0,%1\n"
		"bne-	1b"
		: "=&r"(res)
		: "r"(&Self->Data.RefCount)
		: "cc", "memory");

	return res;
}

int _impl_FcConfigGetRescanInverval(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetRescanInterval(config);
}

FcBool _impl_FcConfigSetRescanInverval(struct FontconfigIFace *Self, FcConfig * config, int rescanInterval) {
	return FcConfigSetRescanInterval(config,rescanInterval);
}

FT_UInt _impl_FcFreeTypeCharIndex(struct FontconfigIFace *Self, FT_Face face, FcChar32 ucs4) {
	return FcFreeTypeCharIndex(face,ucs4);
}

FcCharSet * _impl_FcFreeTypeCharSetAndSpacing(struct FontconfigIFace *Self, FT_Face face, FcBlanks * blanks, int * spacing) {
	return FcFreeTypeCharSetAndSpacing(face,blanks,spacing);
}

FcCharSet * _impl_FcFreeTypeCharSet(struct FontconfigIFace *Self, FT_Face face, FcBlanks * blanks) {
	return FcFreeTypeCharSet(face,blanks);
}

FcResult _impl_FcPatternGetFTFace(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FT_Face * f) {
	return FcPatternGetFTFace(p,object,n,f);
}

FcBool _impl_FcPatternAddFTFace(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FT_Face f) {
	return FcPatternAddFTFace(p,object,f);
}

FcPattern * _impl_FcFreeTypeQueryFace(struct FontconfigIFace *Self, const FT_Face face, const FcChar8 * file, unsigned int id, FcBlanks * blanks) {
	return FcFreeTypeQueryFace(face,file,id,blanks);
}

FcBlanks * _impl_FcBlanksCreate(struct FontconfigIFace *Self) {
	return FcBlanksCreate();
}

void _impl_FcBlanksDestroy(struct FontconfigIFace *Self, FcBlanks * b) {
	FcBlanksDestroy(b);
}

FcBool _impl_FcBlanksAdd(struct FontconfigIFace *Self, FcBlanks * b, FcChar32 ucs4) {
	return FcBlanksAdd(b,ucs4);
}

FcBool _impl_FcBlanksIsMember(struct FontconfigIFace *Self, FcBlanks * b, FcChar32 ucs4) {
	return FcBlanksIsMember(b,ucs4);
}

const FcChar8 * _impl_FcCacheDir(struct FontconfigIFace *Self, const FcCache * c) {
	return FcCacheDir(c);
}

FcFontSet * _impl_FcCacheCopySet(struct FontconfigIFace *Self, const FcCache * c) {
	return FcCacheCopySet(c);
}

const FcChar8 * _impl_FcCacheSubdir(struct FontconfigIFace *Self, const FcCache * c, int i) {
	return FcCacheSubdir(c,i);
}

int _impl_FcCacheNumSubdir(struct FontconfigIFace *Self, const FcCache * c) {
	return FcCacheNumSubdir(c);
}

int _impl_FcCacheNumFont(struct FontconfigIFace *Self, const FcCache * c) {
	return FcCacheNumFont(c);
}

FcBool _impl_FcDirCacheUnlink(struct FontconfigIFace *Self, const FcChar8 * dir, FcConfig * config) {
	return FcDirCacheUnlink(dir,config);
}

FcBool _impl_FcDirCacheValid(struct FontconfigIFace *Self, const FcChar8 * cache_file) {
	return FcDirCacheValid(cache_file);
}

FcBool _impl_FcDirCacheClean(struct FontconfigIFace *Self, const FcChar8 * cache_dir, FcBool verbose) {
	return FcDirCacheClean(cache_dir,verbose);
}

void _impl_FcCacheCreateTagFile(struct FontconfigIFace *Self, FcConfig * config) {
	FcCacheCreateTagFile(config);
}

FcBool _impl_FcDirCacheCreateUUID(struct FontconfigIFace *Self, FcChar8 * dir, FcBool force, FcConfig * config) {
	return FcDirCacheCreateUUID(dir,force,config);
}

FcBool _impl_FcDirCacheDeleteUUID(struct FontconfigIFace *Self, const FcChar8 * dir, FcConfig * config) {
	return FcDirCacheDeleteUUID(dir,config);
}

FcChar8 * _impl_FcConfigHome(struct FontconfigIFace *Self) {
	return FcConfigHome();
}

FcBool _impl_FcConfigEnableHome(struct FontconfigIFace *Self, FcBool enable) {
	return FcConfigEnableHome(enable);
}

FcChar8 * _impl_FcConfigGetFilename(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * url) {
	return FcConfigGetFilename(config,url);
}

FcChar8 * _impl_FcConfigFilename(struct FontconfigIFace *Self, const FcChar8 * url) {
	return FcConfigFilename(url);
}

FcConfig * _impl_FcConfigCreate(struct FontconfigIFace *Self) {
	return FcConfigCreate();
}

FcConfig * _impl_FcConfigReference(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigReference(config);
}

void _impl_FcConfigDestroy(struct FontconfigIFace *Self, FcConfig * config) {
	FcConfigDestroy(config);
}

FcBool _impl_FcConfigSetCurrent(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigSetCurrent(config);
}

FcConfig * _impl_FcConfigGetCurrent(struct FontconfigIFace *Self) {
	return FcConfigGetCurrent();
}

FcBool _impl_FcConfigUptoDate(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigUptoDate(config);
}

FcBool _impl_FcConfigBuildFonts(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigBuildFonts(config);
}

FcStrList * _impl_FcConfigGetFontDirs(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetFontDirs(config);
}

FcStrList * _impl_FcConfigGetConfigDirs(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetConfigDirs(config);
}

FcStrList * _impl_FcConfigGetConfigFiles(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetConfigFiles(config);
}

FcChar8 * _impl_FcConfigGetCache(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetCache(config);
}

FcBlanks * _impl_FcConfigGetBlanks(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetBlanks(config);
}

FcStrList * _impl_FcConfigGetCacheDirs(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetCacheDirs(config);
}

int _impl_FcConfigGetRescanInterval(struct FontconfigIFace *Self, FcConfig * config) {
	return FcConfigGetRescanInterval(config);
}

FcBool _impl_FcConfigSetRescanInterval(struct FontconfigIFace *Self, FcConfig * config, int rescanInterval) {
	return FcConfigSetRescanInterval(config,rescanInterval);
}

FcFontSet * _impl_FcConfigGetFonts(struct FontconfigIFace *Self, FcConfig * config, FcSetName set) {
	return FcConfigGetFonts(config,set);
}

FcBool _impl_FcConfigAcceptFont(struct FontconfigIFace *Self, FcConfig * config, const FcPattern * font) {
	return FcConfigAcceptFont(config,font);
}

FcBool _impl_FcConfigAppFontAddFile(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * file) {
	return FcConfigAppFontAddFile(config,file);
}

FcBool _impl_FcConfigAppFontAddDir(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * dir) {
	return FcConfigAppFontAddDir(config,dir);
}

void _impl_FcConfigAppFontClear(struct FontconfigIFace *Self, FcConfig * config) {
	FcConfigAppFontClear(config);
}

FcBool _impl_FcConfigSubstituteWithPat(struct FontconfigIFace *Self, FcConfig * config, FcPattern * p, FcPattern * p_pat, FcMatchKind kind) {
	return FcConfigSubstituteWithPat(config,p,p_pat,kind);
}

FcBool _impl_FcConfigSubstitute(struct FontconfigIFace *Self, FcConfig * config, FcPattern * p, FcMatchKind kind) {
	return FcConfigSubstitute(config,p,kind);
}

const FcChar8 * _impl_FcConfigGetSysRoot(struct FontconfigIFace *Self, const FcConfig * config) {
	return FcConfigGetSysRoot(config);
}

void _impl_FcConfigSetSysRoot(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * sysroot) {
	FcConfigSetSysRoot(config,sysroot);
}

void _impl_FcConfigFileInfoIterInit(struct FontconfigIFace *Self, FcConfig * config, FcConfigFileInfoIter * iter) {
	FcConfigFileInfoIterInit(config,iter);
}

FcBool _impl_FcConfigFileInfoIterNext(struct FontconfigIFace *Self, FcConfig * config, FcConfigFileInfoIter * iter) {
	return FcConfigFileInfoIterNext(config,iter);
}

FcBool _impl_FcConfigFileInfoIterGet(struct FontconfigIFace *Self, FcConfig * config, FcConfigFileInfoIter * iter, FcChar8 * *name, FcChar8 * *description, FcBool * enabled) {
	return FcConfigFileInfoIterGet(config,iter,name,description,enabled);
}

FcCharSet* _impl_FcCharSetCreate(struct FontconfigIFace *Self) {
	return FcCharSetCreate();
}

FcCharSet * _impl_FcCharSetNew(struct FontconfigIFace *Self) {
	return FcCharSetNew();
}

void _impl_FcCharSetDestroy(struct FontconfigIFace *Self, FcCharSet * fcs) {
	FcCharSetDestroy(fcs);
}

FcBool _impl_FcCharSetAddChar(struct FontconfigIFace *Self, FcCharSet * fcs, FcChar32 ucs4) {
	return FcCharSetAddChar(fcs,ucs4);
}

FcBool _impl_FcCharSetDelChar(struct FontconfigIFace *Self, FcCharSet * fcs, FcChar32 ucs4) {
	return FcCharSetDelChar(fcs,ucs4);
}

FcCharSet* _impl_FcCharSetCopy(struct FontconfigIFace *Self, FcCharSet * src) {
	return FcCharSetCopy(src);
}

FcBool _impl_FcCharSetEqual(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetEqual(a,b);
}

FcCharSet* _impl_FcCharSetIntersect(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetIntersect(a,b);
}

FcCharSet* _impl_FcCharSetUnion(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetUnion(a,b);
}

FcCharSet* _impl_FcCharSetSubtract(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetSubtract(a,b);
}

FcBool _impl_FcCharSetMerge(struct FontconfigIFace *Self, FcCharSet * a, const FcCharSet * b, FcBool * changed) {
	return FcCharSetMerge(a,b,changed);
}

FcBool _impl_FcCharSetHasChar(struct FontconfigIFace *Self, const FcCharSet * fcs, FcChar32 ucs4) {
	return FcCharSetHasChar(fcs,ucs4);
}

FcChar32 _impl_FcCharSetCount(struct FontconfigIFace *Self, const FcCharSet * a) {
	return FcCharSetCount(a);
}

FcChar32 _impl_FcCharSetIntersectCount(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetIntersectCount(a,b);
}

FcChar32 _impl_FcCharSetSubtractCount(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetSubtractCount(a,b);
}

FcBool _impl_FcCharSetIsSubset(struct FontconfigIFace *Self, const FcCharSet * a, const FcCharSet * b) {
	return FcCharSetIsSubset(a,b);
}

FcChar32 _impl_FcCharSetFirstPage(struct FontconfigIFace *Self, const FcCharSet * a, FcChar32 map[FC_CHARSET_MAP_SIZE], FcChar32 * next) {
	return FcCharSetFirstPage(a,map,next);
}

FcChar32 _impl_FcCharSetNextPage(struct FontconfigIFace *Self, const FcCharSet * a, FcChar32 map[FC_CHARSET_MAP_SIZE], FcChar32 * next) {
	return FcCharSetNextPage(a,map,next);
}

FcChar32 _impl_FcCharSetCoverage(struct FontconfigIFace *Self, const FcCharSet * a, FcChar32 page, FcChar32 * result) {
	return FcCharSetCoverage(a,page,result);
}

void _impl_FcValuePrint(struct FontconfigIFace *Self, const FcValue v) {
	FcValuePrint(v);
}

void _impl_FcPatternPrint(struct FontconfigIFace *Self, const FcPattern * p) {
	FcPatternPrint(p);
}

void _impl_FcFontSetPrint(struct FontconfigIFace *Self, const FcFontSet * s) {
	FcFontSetPrint(s);
}

FcStrSet * _impl_FcGetDefaultLangs(struct FontconfigIFace *Self) {
	return FcGetDefaultLangs();
}

void _impl_FcDefaultSubstitute(struct FontconfigIFace *Self, FcPattern * pattern) {
	FcDefaultSubstitute(pattern);
}

FcBool _impl_FcFileIsDir(struct FontconfigIFace *Self, const FcChar8 * file) {
	return FcFileIsDir(file);
}

FcBool _impl_FcFileScan(struct FontconfigIFace *Self, FcFontSet * set, FcStrSet * dirs, FcFileCache * cache, FcBlanks * blanks, const FcChar8 * file, FcBool force) {
	return FcFileScan(set,dirs,cache,blanks,file,force);
}

FcBool _impl_FcDirScan(struct FontconfigIFace *Self, FcFontSet * set, FcStrSet * dirs, FcFileCache * cache, FcBlanks * blanks, const FcChar8 * dir, FcBool force) {
	return FcDirScan(set,dirs,cache,blanks,dir,force);
}

FcBool _impl_FcDirSave(struct FontconfigIFace *Self, FcFontSet * set, FcStrSet * dirs, const FcChar8 * dir) {
	return FcDirSave(set,dirs,dir);
}

FcCache * _impl_FcDirCacheLoad(struct FontconfigIFace *Self, const FcChar8 * dir, FcConfig * config, FcChar8 * *cache_file) {
	return FcDirCacheLoad(dir,config,cache_file);
}

FcCache * _impl_FcDirCacheRescan(struct FontconfigIFace *Self, const FcChar8 * dir, FcConfig * config) {
	return FcDirCacheRescan(dir,config);
}

FcCache * _impl_FcDirCacheRead(struct FontconfigIFace *Self, const FcChar8 * dir, FcBool force, FcConfig * config) {
	return FcDirCacheRead(dir,force,config);
}

FcCache * _impl_FcDirCacheLoadFile(struct FontconfigIFace *Self, const FcChar8 * cache_file, struct stat * file_stat) {
	return FcDirCacheLoadFile(cache_file,file_stat);
}

void _impl_FcDirCacheUnload(struct FontconfigIFace *Self, FcCache * cache) {
	FcDirCacheUnload(cache);
}

FcPattern * _impl_FcFreeTypeQuery(struct FontconfigIFace *Self, const FcChar8 * file, unsigned int id, FcBlanks * blanks, int * count) {
	return FcFreeTypeQuery(file,id,blanks,count);
}

unsigned int _impl_FcFreeTypeQueryAll(struct FontconfigIFace *Self, const FcChar8 * file, unsigned int id, FcBlanks * blanks, int * count, FcFontSet * set) {
	return FcFreeTypeQueryAll(file,id,blanks,count,set);
}

FcFontSet * _impl_FcFontSetCreate(struct FontconfigIFace *Self) {
	return FcFontSetCreate();
}

void _impl_FcFontSetDestroy(struct FontconfigIFace *Self, FcFontSet * s) {
	FcFontSetDestroy(s);
}

FcBool _impl_FcFontSetAdd(struct FontconfigIFace *Self, FcFontSet * s, FcPattern * font) {
	return FcFontSetAdd(s,font);
}

FcConfig * _impl_FcInitLoadConfig(struct FontconfigIFace *Self) {
	return FcInitLoadConfig();
}

FcConfig * _impl_FcInitLoadConfigAndFonts(struct FontconfigIFace *Self) {
	return FcInitLoadConfigAndFonts();
}

FcBool _impl_FcInit(struct FontconfigIFace *Self) {
	return FcInit();
}

void _impl_FcFini(struct FontconfigIFace *Self) {
	FcFini();
}

int _impl_FcGetVersion(struct FontconfigIFace *Self) {
	return FcGetVersion();
}

FcBool _impl_FcInitReinitialize(struct FontconfigIFace *Self) {
	return FcInitReinitialize();
}

FcBool _impl_FcInitBringUptoDate(struct FontconfigIFace *Self) {
	return FcInitBringUptoDate();
}

FcStrSet * _impl_FcGetLangs(struct FontconfigIFace *Self) {
	return FcGetLangs();
}

FcChar8 * _impl_FcLangNormalize(struct FontconfigIFace *Self, const FcChar8 * lang) {
	return FcLangNormalize(lang);
}

const FcCharSet * _impl_FcLangGetCharSet(struct FontconfigIFace *Self, const FcChar8 * lang) {
	return FcLangGetCharSet(lang);
}

FcLangSet* _impl_FcLangSetCreate(struct FontconfigIFace *Self) {
	return FcLangSetCreate();
}

void _impl_FcLangSetDestroy(struct FontconfigIFace *Self, FcLangSet * ls) {
	FcLangSetDestroy(ls);
}

FcLangSet* _impl_FcLangSetCopy(struct FontconfigIFace *Self, const FcLangSet * ls) {
	return FcLangSetCopy(ls);
}

FcBool _impl_FcLangSetAdd(struct FontconfigIFace *Self, FcLangSet * ls, const FcChar8 * lang) {
	return FcLangSetAdd(ls,lang);
}

FcBool _impl_FcLangSetDel(struct FontconfigIFace *Self, FcLangSet * ls, const FcChar8 * lang) {
	return FcLangSetDel(ls,lang);
}

FcLangResult _impl_FcLangSetHasLang(struct FontconfigIFace *Self, const FcLangSet * ls, const FcChar8 * lang) {
	return FcLangSetHasLang(ls,lang);
}

FcLangResult _impl_FcLangSetCompare(struct FontconfigIFace *Self, const FcLangSet * lsa, const FcLangSet * lsb) {
	return FcLangSetCompare(lsa,lsb);
}

FcBool _impl_FcLangSetContains(struct FontconfigIFace *Self, const FcLangSet * lsa, const FcLangSet * lsb) {
	return FcLangSetContains(lsa,lsb);
}

FcBool _impl_FcLangSetEqual(struct FontconfigIFace *Self, const FcLangSet * lsa, const FcLangSet * lsb) {
	return FcLangSetEqual(lsa,lsb);
}

FcChar32 _impl_FcLangSetHash(struct FontconfigIFace *Self, const FcLangSet * ls) {
	return FcLangSetHash(ls);
}

FcStrSet * _impl_FcLangSetGetLangs(struct FontconfigIFace *Self, const FcLangSet * ls) {
	return FcLangSetGetLangs(ls);
}

FcLangSet * _impl_FcLangSetUnion(struct FontconfigIFace *Self, const FcLangSet * a, const FcLangSet * b) {
	return FcLangSetUnion(a,b);
}

FcLangSet * _impl_FcLangSetSubtract(struct FontconfigIFace *Self, const FcLangSet * a, const FcLangSet * b) {
	return FcLangSetSubtract(a,b);
}

FcObjectSet * _impl_FcObjectSetCreate(struct FontconfigIFace *Self) {
	return FcObjectSetCreate();
}

FcBool _impl_FcObjectSetAdd(struct FontconfigIFace *Self, FcObjectSet * os, const char * object) {
	return FcObjectSetAdd(os,object);
}

void _impl_FcObjectSetDestroy(struct FontconfigIFace *Self, FcObjectSet * os) {
	FcObjectSetDestroy(os);
}

FcObjectSet * _impl_FcObjectSetVaBuild(struct FontconfigIFace *Self, const char * first, va_list va) {
	return FcObjectSetVaBuild(first,va);
}

FcObjectSet * _impl_FcObjectSetBuild(struct FontconfigIFace *Self, const char * first, ...) {
	va_list ap;
	va_start(ap, first);
	FcObjectSet *ret = FcObjectSetBuild(first, ap);
	va_end(ap);
	return ret;
}

FcFontSet * _impl_FcFontSetList(struct FontconfigIFace *Self, FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcObjectSet * os) {
	return FcFontSetList(config,sets,nsets,p,os);
}

FcFontSet * _impl_FcFontList(struct FontconfigIFace *Self, FcConfig * config, FcPattern * p, FcObjectSet * os) {
	return FcFontList(config,p,os);
}

FcAtomic * _impl_FcAtomicCreate(struct FontconfigIFace *Self, const FcChar8 * file) {
	return FcAtomicCreate(file);
}

FcBool _impl_FcAtomicLock(struct FontconfigIFace *Self, FcAtomic * atomic) {
	return FcAtomicLock(atomic);
}

FcChar8 * _impl_FcAtomicNewFile(struct FontconfigIFace *Self, FcAtomic * atomic) {
	return FcAtomicNewFile(atomic);
}

FcChar8 * _impl_FcAtomicOrigFile(struct FontconfigIFace *Self, FcAtomic * atomic) {
	return FcAtomicOrigFile(atomic);
}

FcBool _impl_FcAtomicReplaceOrig(struct FontconfigIFace *Self, FcAtomic * atomic) {
	return FcAtomicReplaceOrig(atomic);
}

void _impl_FcAtomicDeleteNew(struct FontconfigIFace *Self, FcAtomic * atomic) {
	FcAtomicDeleteNew(atomic);
}

void _impl_FcAtomicUnlock(struct FontconfigIFace *Self, FcAtomic * atomic) {
	FcAtomicUnlock(atomic);
}

void _impl_FcAtomicDestroy(struct FontconfigIFace *Self, FcAtomic * atomic) {
	FcAtomicDestroy(atomic);
}

FcPattern * _impl_FcFontSetMatch(struct FontconfigIFace *Self, FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcResult * result) {
	return FcFontSetMatch(config,sets,nsets,p,result);
}

FcPattern * _impl_FcFontMatch(struct FontconfigIFace *Self, FcConfig * config, FcPattern * p, FcResult * result) {
	return FcFontMatch(config,p,result);
}

FcPattern * _impl_FcFontRenderPrepare(struct FontconfigIFace *Self, FcConfig * config, FcPattern * pat, FcPattern * font) {
	return FcFontRenderPrepare(config,pat,font);
}

FcFontSet * _impl_FcFontSetSort(struct FontconfigIFace *Self, FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcBool trim, FcCharSet * *csp, FcResult * result) {
	return FcFontSetSort(config,sets,nsets,p,trim,csp,result);
}

FcFontSet * _impl_FcFontSort(struct FontconfigIFace *Self, FcConfig * config, FcPattern * p, FcBool trim, FcCharSet * *csp, FcResult * result) {
	return FcFontSort(config,p,trim,csp,result);
}

void _impl_FcFontSetSortDestroy(struct FontconfigIFace *Self, FcFontSet * fs) {
	FcFontSetSortDestroy(fs);
}

FcMatrix * _impl_FcMatrixCopy(struct FontconfigIFace *Self, const FcMatrix * mat) {
	return FcMatrixCopy(mat);
}

FcBool _impl_FcMatrixEqual(struct FontconfigIFace *Self, const FcMatrix * mat1, const FcMatrix * mat2) {
	return FcMatrixEqual(mat1,mat2);
}

void _impl_FcMatrixMultiply(struct FontconfigIFace *Self, FcMatrix * result, const FcMatrix * a, const FcMatrix * b) {
	FcMatrixMultiply(result,a,b);
}

void _impl_FcMatrixRotate(struct FontconfigIFace *Self, FcMatrix * m, double c, double s) {
	FcMatrixRotate(m,c,s);
}

void _impl_FcMatrixScale(struct FontconfigIFace *Self, FcMatrix * m, double sx, double sy) {
	FcMatrixScale(m,sx,sy);
}

void _impl_FcMatrixShear(struct FontconfigIFace *Self, FcMatrix * m, double sh, double sv) {
	FcMatrixShear(m,sh,sv);
}

FcBool _impl_FcNameRegisterObjectTypes(struct FontconfigIFace *Self, const FcObjectType * types, int ntype) {
	return FcNameRegisterObjectTypes(types,ntype);
}

FcBool _impl_FcNameUnregisterObjectTypes(struct FontconfigIFace *Self, const FcObjectType * types, int ntype) {
	return FcNameUnregisterObjectTypes(types,ntype);
}

const FcObjectType * _impl_FcNameGetObjectType(struct FontconfigIFace *Self, const char * object) {
	return FcNameGetObjectType(object);
}

FcBool _impl_FcNameRegisterConstants(struct FontconfigIFace *Self, const FcConstant * consts, int nconsts) {
	return FcNameRegisterConstants(consts,nconsts);
}

FcBool _impl_FcNameUnregisterConstants(struct FontconfigIFace *Self, const FcConstant * consts, int nconsts) {
	return FcNameUnregisterConstants(consts,nconsts);
}

const FcConstant * _impl_FcNameGetConstant(struct FontconfigIFace *Self, const FcChar8 * string) {
	return FcNameGetConstant(string);
}

const FcConstant * _impl_FcNameGetConstantFor(struct FontconfigIFace *Self, const FcChar8 * string, const char * object) {
	return FcNameGetConstantFor(string,object);
}

FcBool _impl_FcNameConstant(struct FontconfigIFace *Self, const FcChar8 * string, int * result) {
	return FcNameConstant(string,result);
}

FcPattern * _impl_FcNameParse(struct FontconfigIFace *Self, const FcChar8 * name) {
	return FcNameParse(name);
}

FcChar8 * _impl_FcNameUnparse(struct FontconfigIFace *Self, FcPattern * pat) {
	return FcNameUnparse(pat);
}

FcPattern * _impl_FcPatternCreate(struct FontconfigIFace *Self) {
	return FcPatternCreate();
}

FcPattern * _impl_FcPatternDuplicate(struct FontconfigIFace *Self, const FcPattern * p) {
	return FcPatternDuplicate(p);
}

void _impl_FcPatternReference(struct FontconfigIFace *Self, FcPattern * p) {
	FcPatternReference(p);
}

FcPattern * _impl_FcPatternFilter(struct FontconfigIFace *Self, FcPattern * p, const FcObjectSet * os) {
	return FcPatternFilter(p,os);
}

void _impl_FcValueDestroy(struct FontconfigIFace *Self, FcValue v) {
	FcValueDestroy(v);
}

FcBool _impl_FcValueEqual(struct FontconfigIFace *Self, FcValue va, FcValue vb) {
	return FcValueEqual(va,vb);
}

FcValue _impl_FcValueSave(struct FontconfigIFace *Self, FcValue v) {
	return FcValueSave(v);
}

void _impl_FcPatternDestroy(struct FontconfigIFace *Self, FcPattern * p) {
	FcPatternDestroy(p);
}

FcBool _impl_FcPatternEqual(struct FontconfigIFace *Self, const FcPattern * pa, const FcPattern * pb) {
	return FcPatternEqual(pa,pb);
}

FcBool _impl_FcPatternEqualSubset(struct FontconfigIFace *Self, const FcPattern * pa, const FcPattern * pb, const FcObjectSet * os) {
	return FcPatternEqualSubset(pa,pb,os);
}

FcChar32 _impl_FcPatternHash(struct FontconfigIFace *Self, const FcPattern * p) {
	return FcPatternHash(p);
}

FcBool _impl_FcPatternAdd(struct FontconfigIFace *Self, FcPattern * p, const char * object, FcValue value, FcBool append) {
	return FcPatternAdd(p,object,value,append);
}

FcBool _impl_FcPatternAddWeak(struct FontconfigIFace *Self, FcPattern * p, const char * object, FcValue value, FcBool append) {
	return FcPatternAddWeak(p,object,value,append);
}

FcResult _impl_FcPatternGet(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int id, FcValue * v) {
	return FcPatternGet(p,object,id,v);
}

FcResult _impl_FcPatternGetWithBinding(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int id, FcValue * v, FcValueBinding * b) {
	return FcPatternGetWithBinding(p,object,id,v,b);
}

FcBool _impl_FcPatternDel(struct FontconfigIFace *Self, FcPattern * p, const char * object) {
	return FcPatternDel(p,object);
}

FcBool _impl_FcPatternRemove(struct FontconfigIFace *Self, FcPattern * p, const char * object, int id) {
	return FcPatternRemove(p,object,id);
}

FcBool _impl_FcPatternAddInteger(struct FontconfigIFace *Self, FcPattern * p, const char * object, int i) {
	return FcPatternAddInteger(p,object,i);
}

FcBool _impl_FcPatternAddDouble(struct FontconfigIFace *Self, FcPattern * p, const char * object, double d) {
	return FcPatternAddDouble(p,object,d);
}

FcBool _impl_FcPatternAddString(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FcChar8 * s) {
	return FcPatternAddString(p,object,s);
}

FcBool _impl_FcPatternAddMatrix(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FcMatrix * s) {
	return FcPatternAddMatrix(p,object,s);
}

FcBool _impl_FcPatternAddCharSet(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FcCharSet * c) {
	return FcPatternAddCharSet(p,object,c);
}

FcBool _impl_FcPatternAddBool(struct FontconfigIFace *Self, FcPattern * p, const char * object, FcBool b) {
	return FcPatternAddBool(p,object,b);
}

FcBool _impl_FcPatternAddLangSet(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FcLangSet * ls) {
	return FcPatternAddLangSet(p,object,ls);
}

FcBool _impl_FcPatternAddRange(struct FontconfigIFace *Self, FcPattern * p, const char * object, const FcRange * r) {
	return FcPatternAddRange(p,object,r);
}

FcResult _impl_FcPatternGetInteger(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, int * i) {
	return FcPatternGetInteger(p,object,n,i);
}

FcResult _impl_FcPatternGetDouble(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, double * d) {
	return FcPatternGetDouble(p,object,n,d);
}

FcResult _impl_FcPatternGetString(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FcChar8 ** s) {
	return FcPatternGetString(p,object,n,s);
}

FcResult _impl_FcPatternGetMatrix(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FcMatrix * *s) {
	return FcPatternGetMatrix(p,object,n,s);
}

FcResult _impl_FcPatternGetCharSet(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FcCharSet * *c) {
	return FcPatternGetCharSet(p,object,n,c);
}

FcResult _impl_FcPatternGetBool(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FcBool * b) {
	return FcPatternGetBool(p,object,n,b);
}

FcResult _impl_FcPatternGetLangSet(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int n, FcLangSet * *ls) {
	return FcPatternGetLangSet(p,object,n,ls);
}

FcResult _impl_FcPatternGetRange(struct FontconfigIFace *Self, const FcPattern * p, const char * object, int id, FcRange * *r) {
	return FcPatternGetRange(p,object,id,r);
}

FcPattern * _impl_FcPatternVaBuild(struct FontconfigIFace *Self, FcPattern * p, va_list va) {
	return FcPatternVaBuild(p,va);
}

FcPattern * _impl_FcPatternBuild(struct FontconfigIFace *Self, FcPattern * p, ...) {
	va_list ap;
	va_start(ap, p);
	FcPattern *ret = FcPatternBuild(p, ap);
	va_end(ap);
	return ret;
}

FcChar8 * _impl_FcPatternFormat(struct FontconfigIFace *Self, FcPattern * pat, const FcChar8 * format) {
	return FcPatternFormat(pat,format);
}

FcRange * _impl_FcRangeCreateDouble(struct FontconfigIFace *Self, double begin, double end) {
	return FcRangeCreateDouble(begin,end);
}

FcRange * _impl_FcRangeCreateInteger(struct FontconfigIFace *Self, FcChar32 begin, FcChar32 end) {
	return FcRangeCreateInteger(begin,end);
}

void _impl_FcRangeDestroy(struct FontconfigIFace *Self, FcRange * range) {
	FcRangeDestroy(range);
}

FcRange * _impl_FcRangeCopy(struct FontconfigIFace *Self, const FcRange * r) {
	return FcRangeCopy(r);
}

FcBool _impl_FcRangeGetDouble(struct FontconfigIFace *Self, const FcRange * range, double * begin, double * end) {
	return FcRangeGetDouble(range,begin,end);
}

void _impl_FcPatternIterStart(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter) {
	FcPatternIterStart(pat,iter);
}

FcBool _impl_FcPatternIterNext(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter) {
	return FcPatternIterNext(pat,iter);
}

FcBool _impl_FcPatternIterEqual(struct FontconfigIFace *Self, const FcPattern * p1, FcPatternIter * i1, const FcPattern * p2, FcPatternIter * i2) {
	return FcPatternIterEqual(p1,i1,p2,i2);
}

FcBool _impl_FcPatternFindIter(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter, const char * object) {
	return FcPatternFindIter(pat,iter,object);
}

FcBool _impl_FcPatternIterIsValid(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter) {
	return FcPatternIterIsValid(pat,iter);
}

const char * _impl_FcPatternIterGetObject(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter) {
	return FcPatternIterGetObject(pat,iter);
}

int _impl_FcPatternIterValueCount(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter) {
	return FcPatternIterValueCount(pat,iter);
}

FcResult _impl_FcPatternIterGetValue(struct FontconfigIFace *Self, const FcPattern * pat, FcPatternIter * iter, int id, FcValue * v, FcValueBinding * b) {
	return FcPatternIterGetValue(pat,iter,id,v,b);
}

int _impl_FcWeightFromOpenType(struct FontconfigIFace *Self, int ot_weight) {
	return FcWeightFromOpenType(ot_weight);
}

double _impl_FcWeightFromOpenTypeDouble(struct FontconfigIFace *Self, double ot_weight) {
	return FcWeightFromOpenTypeDouble(ot_weight);
}

int _impl_FcWeightToOpenType(struct FontconfigIFace *Self, int fc_weight) {
	return FcWeightToOpenType(fc_weight);
}

double _impl_FcWeightToOpenTypeDouble(struct FontconfigIFace *Self, double fc_weight) {
	return FcWeightToOpenTypeDouble(fc_weight);
}

FcChar8 * _impl_FcStrCopy(struct FontconfigIFace *Self, const FcChar8 * s) {
	return FcStrCopy(s);
}

FcChar8 * _impl_FcStrCopyFilename(struct FontconfigIFace *Self, const FcChar8 * s) {
	return FcStrCopyFilename(s);
}

FcChar8 * _impl_FcStrPlus(struct FontconfigIFace *Self, const FcChar8 * s1, const FcChar8 * s2) {
	return FcStrPlus(s1,s2);
}

void _impl_FcStrFree(struct FontconfigIFace *Self, FcChar8 * s) {
	FcStrFree(s);
}

FcChar8 * _impl_FcStrDowncase(struct FontconfigIFace *Self, const FcChar8 * s) {
	return FcStrDowncase(s);
}

int _impl_FcStrCmpIgnoreCase(struct FontconfigIFace *Self, const FcChar8 * s1, const FcChar8 * s2) {
	return FcStrCmpIgnoreCase(s1,s2);
}

int _impl_FcStrCmp(struct FontconfigIFace *Self, const FcChar8 * s1, const FcChar8 * s2) {
	return FcStrCmp(s1,s2);
}

const FcChar8 * _impl_FcStrStrIgnoreCase(struct FontconfigIFace *Self, const FcChar8 * s1, const FcChar8 * s2) {
	return FcStrStrIgnoreCase(s1,s2);
}

const FcChar8 * _impl_FcStrStr(struct FontconfigIFace *Self, const FcChar8 * s1, const FcChar8 * s2) {
	return FcStrStr(s1,s2);
}

int _impl_FcUtf8ToUcs4(struct FontconfigIFace *Self, const FcChar8 * src_orig, FcChar32 * dst, int len) {
	return FcUtf8ToUcs4(src_orig,dst,len);
}

FcBool _impl_FcUtf8Len(struct FontconfigIFace *Self, const FcChar8 * string, int len, int * nchar, int * wchar) {
	return FcUtf8Len(string,len,nchar,wchar);
}

int _impl_FcUcs4ToUtf8(struct FontconfigIFace *Self, FcChar32 ucs4, FcChar8 dest[FC_UTF8_MAX_LEN]) {
	return FcUcs4ToUtf8(ucs4,dest);
}

int _impl_FcUtf16ToUcs4(struct FontconfigIFace *Self, const FcChar8 * src_orig, FcEndian endian, FcChar32 * dst, int len) {
	return FcUtf16ToUcs4(src_orig,endian,dst,len);
}

FcBool _impl_FcUtf16Len(struct FontconfigIFace *Self, const FcChar8 * string, FcEndian endian, int len, int * nchar, int * wchar) {
	return FcUtf16Len(string,endian,len,nchar,wchar);
}

FcChar8 * _impl_FcStrBuildFilename(struct FontconfigIFace *Self, const FcChar8 * path, ... ) {
	va_list ap;
	va_start(ap, path);
	FcChar8 *ret = FcStrBuildFilename(path, ap);
	va_end(ap);
	return ret;
}

FcChar8 * _impl_FcStrDirname(struct FontconfigIFace *Self, const FcChar8 * file) {
	return FcStrDirname(file);
}

FcChar8 * _impl_FcStrBasename(struct FontconfigIFace *Self, const FcChar8 * file) {
	return FcStrBasename(file);
}

FcStrSet * _impl_FcStrSetCreate(struct FontconfigIFace *Self) {
	return FcStrSetCreate();
}

FcBool _impl_FcStrSetMember(struct FontconfigIFace *Self, FcStrSet * set, const FcChar8 * s) {
	return FcStrSetMember(set,s);
}

FcBool _impl_FcStrSetEqual(struct FontconfigIFace *Self, FcStrSet * sa, FcStrSet * sb) {
	return FcStrSetEqual(sa,sb);
}

FcBool _impl_FcStrSetAdd(struct FontconfigIFace *Self, FcStrSet * set, const FcChar8 * s) {
	return FcStrSetAdd(set,s);
}

FcBool _impl_FcStrSetAddFilename(struct FontconfigIFace *Self, FcStrSet * set, const FcChar8 * s) {
	return FcStrSetAddFilename(set,s);
}

FcBool _impl_FcStrSetDel(struct FontconfigIFace *Self, FcStrSet * set, const FcChar8 * s) {
	return FcStrSetDel(set,s);
}

void _impl_FcStrSetDestroy(struct FontconfigIFace *Self, FcStrSet * set) {
	FcStrSetDestroy(set);
}

FcStrList * _impl_FcStrListCreate(struct FontconfigIFace *Self, FcStrSet * set) {
	return FcStrListCreate(set);
}

void _impl_FcStrListFirst(struct FontconfigIFace *Self, FcStrList * list) {
	FcStrListFirst(list);
}

FcChar8 * _impl_FcStrListNext(struct FontconfigIFace *Self, FcStrList * list) {
	return FcStrListNext(list);
}

void _impl_FcStrListDone(struct FontconfigIFace *Self, FcStrList * list) {
	FcStrListDone(list);
}

FcBool _impl_FcConfigParseAndLoad(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * file, FcBool complain) {
	return FcConfigParseAndLoad(config,file,complain);
}

FcBool _impl_FcConfigParseAndLoadFromMemory(struct FontconfigIFace *Self, FcConfig * config, const FcChar8 * buffer, FcBool complain) {
	return FcConfigParseAndLoadFromMemory(config,buffer,complain);
}

