#include <stdarg.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <proto/fontconfig.h>
#include <stdarg.h>

#include <fontconfig/fontconfig.h>
#include <freetype/freetype.h>
#include <fontconfig/fcfreetype.h>

int FcConfigGetRescanInverval(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetRescanInverval(config);
}

FcBool FcConfigSetRescanInverval(FcConfig * config, int rescanInterval) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigSetRescanInverval(config,rescanInterval);
}

FT_UInt FcFreeTypeCharIndex(FT_Face face, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeCharIndex(face,ucs4);
}

FcCharSet * FcFreeTypeCharSetAndSpacing(FT_Face face, FcBlanks * blanks, int * spacing) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeCharSetAndSpacing(face,blanks,spacing);
}

FcCharSet * FcFreeTypeCharSet(FT_Face face, FcBlanks * blanks) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeCharSet(face,blanks);
}

FcResult FcPatternGetFTFace(const FcPattern * p, const char * object, int n, FT_Face * f) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetFTFace(p,object,n,f);
}

FcBool FcPatternAddFTFace(FcPattern * p, const char * object, const FT_Face f) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddFTFace(p,object,f);
}

FcPattern * FcFreeTypeQueryFace(const FT_Face face, const FcChar8 * file, unsigned int id, FcBlanks * blanks) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeQueryFace(face,file,id,blanks);
}

FcBlanks * FcBlanksCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcBlanksCreate();
}

void FcBlanksDestroy(FcBlanks * b) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcBlanksDestroy(b);
}

FcBool FcBlanksAdd(FcBlanks * b, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcBlanksAdd(b,ucs4);
}

FcBool FcBlanksIsMember(FcBlanks * b, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcBlanksIsMember(b,ucs4);
}

const FcChar8 * FcCacheDir(const FcCache * c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCacheDir(c);
}

FcFontSet * FcCacheCopySet(const FcCache * c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCacheCopySet(c);
}

const FcChar8 * FcCacheSubdir(const FcCache * c, int i) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCacheSubdir(c,i);
}

int FcCacheNumSubdir(const FcCache * c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCacheNumSubdir(c);
}

int FcCacheNumFont(const FcCache * c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCacheNumFont(c);
}

FcBool FcDirCacheUnlink(const FcChar8 * dir, FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheUnlink(dir,config);
}

FcBool FcDirCacheValid(const FcChar8 * cache_file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheValid(cache_file);
}

FcBool FcDirCacheClean(const FcChar8 * cache_dir, FcBool verbose) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheClean(cache_dir,verbose);
}

void FcCacheCreateTagFile(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcCacheCreateTagFile(config);
}

FcBool FcDirCacheCreateUUID(FcChar8 * dir, FcBool force, FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheCreateUUID(dir,force,config);
}

FcBool FcDirCacheDeleteUUID(const FcChar8 * dir, FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheDeleteUUID(dir,config);
}

FcChar8 * FcConfigHome(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigHome();
}

FcBool FcConfigEnableHome(FcBool enable) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigEnableHome(enable);
}

FcChar8 * FcConfigGetFilename(FcConfig * config, const FcChar8 * url) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetFilename(config,url);
}

FcChar8 * FcConfigFilename(const FcChar8 * url) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigFilename(url);
}

FcConfig * FcConfigCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigCreate();
}

FcConfig * FcConfigReference(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigReference(config);
}

void FcConfigDestroy(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcConfigDestroy(config);
}

FcBool FcConfigSetCurrent(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigSetCurrent(config);
}

FcConfig * FcConfigGetCurrent(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetCurrent();
}

FcBool FcConfigUptoDate(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigUptoDate(config);
}

FcBool FcConfigBuildFonts(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigBuildFonts(config);
}

FcStrList * FcConfigGetFontDirs(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetFontDirs(config);
}

FcStrList * FcConfigGetConfigDirs(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetConfigDirs(config);
}

FcStrList * FcConfigGetConfigFiles(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetConfigFiles(config);
}

FcChar8 * FcConfigGetCache(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetCache(config);
}

FcBlanks * FcConfigGetBlanks(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetBlanks(config);
}

FcStrList * FcConfigGetCacheDirs(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetCacheDirs(config);
}

int FcConfigGetRescanInterval(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetRescanInterval(config);
}

FcBool FcConfigSetRescanInterval(FcConfig * config, int rescanInterval) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigSetRescanInterval(config,rescanInterval);
}

FcFontSet * FcConfigGetFonts(FcConfig * config, FcSetName set) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetFonts(config,set);
}

FcBool FcConfigAcceptFont(FcConfig * config, const FcPattern * font) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigAcceptFont(config,font);
}

FcBool FcConfigAppFontAddFile(FcConfig * config, const FcChar8 * file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigAppFontAddFile(config,file);
}

FcBool FcConfigAppFontAddDir(FcConfig * config, const FcChar8 * dir) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigAppFontAddDir(config,dir);
}

void FcConfigAppFontClear(FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcConfigAppFontClear(config);
}

FcBool FcConfigSubstituteWithPat(FcConfig * config, FcPattern * p, FcPattern * p_pat, FcMatchKind kind) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigSubstituteWithPat(config,p,p_pat,kind);
}

FcBool FcConfigSubstitute(FcConfig * config, FcPattern * p, FcMatchKind kind) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigSubstitute(config,p,kind);
}

const FcChar8 * FcConfigGetSysRoot(const FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigGetSysRoot(config);
}

void FcConfigSetSysRoot(FcConfig * config, const FcChar8 * sysroot) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcConfigSetSysRoot(config,sysroot);
}

void FcConfigFileInfoIterInit(FcConfig * config, FcConfigFileInfoIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcConfigFileInfoIterInit(config,iter);
}

FcBool FcConfigFileInfoIterNext(FcConfig * config, FcConfigFileInfoIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigFileInfoIterNext(config,iter);
}

FcBool FcConfigFileInfoIterGet(FcConfig * config, FcConfigFileInfoIter * iter, FcChar8 * *name, FcChar8 * *description, FcBool * enabled) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigFileInfoIterGet(config,iter,name,description,enabled);
}

FcCharSet* FcCharSetCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetCreate();
}

FcCharSet * FcCharSetNew(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetNew();
}

void FcCharSetDestroy(FcCharSet * fcs) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcCharSetDestroy(fcs);
}

FcBool FcCharSetAddChar(FcCharSet * fcs, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetAddChar(fcs,ucs4);
}

FcBool FcCharSetDelChar(FcCharSet * fcs, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetDelChar(fcs,ucs4);
}

FcCharSet* FcCharSetCopy(FcCharSet * src) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetCopy(src);
}

FcBool FcCharSetEqual(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetEqual(a,b);
}

FcCharSet* FcCharSetIntersect(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetIntersect(a,b);
}

FcCharSet* FcCharSetUnion(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetUnion(a,b);
}

FcCharSet* FcCharSetSubtract(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetSubtract(a,b);
}

FcBool FcCharSetMerge(FcCharSet * a, const FcCharSet * b, FcBool * changed) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetMerge(a,b,changed);
}

FcBool FcCharSetHasChar(const FcCharSet * fcs, FcChar32 ucs4) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetHasChar(fcs,ucs4);
}

FcChar32 FcCharSetCount(const FcCharSet * a) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetCount(a);
}

FcChar32 FcCharSetIntersectCount(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetIntersectCount(a,b);
}

FcChar32 FcCharSetSubtractCount(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetSubtractCount(a,b);
}

FcBool FcCharSetIsSubset(const FcCharSet * a, const FcCharSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetIsSubset(a,b);
}

FcChar32 FcCharSetFirstPage(const FcCharSet * a, FcChar32 map[FC_CHARSET_MAP_SIZE], FcChar32 * next) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetFirstPage(a,map,next);
}

FcChar32 FcCharSetNextPage(const FcCharSet * a, FcChar32 map[FC_CHARSET_MAP_SIZE], FcChar32 * next) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetNextPage(a,map,next);
}

FcChar32 FcCharSetCoverage(const FcCharSet * a, FcChar32 page, FcChar32 * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcCharSetCoverage(a,page,result);
}

void FcValuePrint(const FcValue v) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcValuePrint(v);
}

void FcPatternPrint(const FcPattern * p) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcPatternPrint(p);
}

void FcFontSetPrint(const FcFontSet * s) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcFontSetPrint(s);
}

FcStrSet * FcGetDefaultLangs(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcGetDefaultLangs();
}

void FcDefaultSubstitute(FcPattern * pattern) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcDefaultSubstitute(pattern);
}

FcBool FcFileIsDir(const FcChar8 * file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFileIsDir(file);
}

FcBool FcFileScan(FcFontSet * set, FcStrSet * dirs, FcFileCache * cache, FcBlanks * blanks, const FcChar8 * file, FcBool force) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFileScan(set,dirs,cache,blanks,file,force);
}

FcBool FcDirScan(FcFontSet * set, FcStrSet * dirs, FcFileCache * cache, FcBlanks * blanks, const FcChar8 * dir, FcBool force) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirScan(set,dirs,cache,blanks,dir,force);
}

FcBool FcDirSave(FcFontSet * set, FcStrSet * dirs, const FcChar8 * dir) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirSave(set,dirs,dir);
}

FcCache * FcDirCacheLoad(const FcChar8 * dir, FcConfig * config, FcChar8 * *cache_file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheLoad(dir,config,cache_file);
}

FcCache * FcDirCacheRescan(const FcChar8 * dir, FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheRescan(dir,config);
}

FcCache * FcDirCacheRead(const FcChar8 * dir, FcBool force, FcConfig * config) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheRead(dir,force,config);
}

FcCache * FcDirCacheLoadFile(const FcChar8 * cache_file, struct stat * file_stat) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcDirCacheLoadFile(cache_file,file_stat);
}

void FcDirCacheUnload(FcCache * cache) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcDirCacheUnload(cache);
}

FcPattern * FcFreeTypeQuery(const FcChar8 * file, unsigned int id, FcBlanks * blanks, int * count) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeQuery(file,id,blanks,count);
}

unsigned int FcFreeTypeQueryAll(const FcChar8 * file, unsigned int id, FcBlanks * blanks, int * count, FcFontSet * set) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFreeTypeQueryAll(file,id,blanks,count,set);
}

FcFontSet * FcFontSetCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSetCreate();
}

void FcFontSetDestroy(FcFontSet * s) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcFontSetDestroy(s);
}

FcBool FcFontSetAdd(FcFontSet * s, FcPattern * font) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSetAdd(s,font);
}

FcConfig * FcInitLoadConfig(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcInitLoadConfig();
}

FcConfig * FcInitLoadConfigAndFonts(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcInitLoadConfigAndFonts();
}

FcBool FcInit(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcInit();
}

void FcFini(void) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcFini();
}

int FcGetVersion(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcGetVersion();
}

FcBool FcInitReinitialize(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcInitReinitialize();
}

FcBool FcInitBringUptoDate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcInitBringUptoDate();
}

FcStrSet * FcGetLangs(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcGetLangs();
}

FcChar8 * FcLangNormalize(const FcChar8 * lang) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangNormalize(lang);
}

const FcCharSet * FcLangGetCharSet(const FcChar8 * lang) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangGetCharSet(lang);
}

FcLangSet* FcLangSetCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetCreate();
}

void FcLangSetDestroy(FcLangSet * ls) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcLangSetDestroy(ls);
}

FcLangSet* FcLangSetCopy(const FcLangSet * ls) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetCopy(ls);
}

FcBool FcLangSetAdd(FcLangSet * ls, const FcChar8 * lang) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetAdd(ls,lang);
}

FcBool FcLangSetDel(FcLangSet * ls, const FcChar8 * lang) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetDel(ls,lang);
}

FcLangResult FcLangSetHasLang(const FcLangSet * ls, const FcChar8 * lang) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetHasLang(ls,lang);
}

FcLangResult FcLangSetCompare(const FcLangSet * lsa, const FcLangSet * lsb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetCompare(lsa,lsb);
}

FcBool FcLangSetContains(const FcLangSet * lsa, const FcLangSet * lsb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetContains(lsa,lsb);
}

FcBool FcLangSetEqual(const FcLangSet * lsa, const FcLangSet * lsb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetEqual(lsa,lsb);
}

FcChar32 FcLangSetHash(const FcLangSet * ls) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetHash(ls);
}

FcStrSet * FcLangSetGetLangs(const FcLangSet * ls) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetGetLangs(ls);
}

FcLangSet * FcLangSetUnion(const FcLangSet * a, const FcLangSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetUnion(a,b);
}

FcLangSet * FcLangSetSubtract(const FcLangSet * a, const FcLangSet * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcLangSetSubtract(a,b);
}

FcObjectSet * FcObjectSetCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcObjectSetCreate();
}

FcBool FcObjectSetAdd(FcObjectSet * os, const char * object) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcObjectSetAdd(os,object);
}

void FcObjectSetDestroy(FcObjectSet * os) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcObjectSetDestroy(os);
}

FcObjectSet * FcObjectSetVaBuild(const char * first, va_list va) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcObjectSetVaBuild(first,va);
}

FcObjectSet * FcObjectSetBuild(const char * first, ...) {
	extern struct FontconfigIFace *IFontconfig;

	va_list ap;
	va_start(ap, first);
	FcObjectSet *ret = IFontconfig->FcObjectSetBuild(first, ap);
	va_end(ap);
	return ret;
}

FcFontSet * FcFontSetList(FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcObjectSet * os) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSetList(config,sets,nsets,p,os);
}

FcFontSet * FcFontList(FcConfig * config, FcPattern * p, FcObjectSet * os) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontList(config,p,os);
}

FcAtomic * FcAtomicCreate(const FcChar8 * file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcAtomicCreate(file);
}

FcBool FcAtomicLock(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcAtomicLock(atomic);
}

FcChar8 * FcAtomicNewFile(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcAtomicNewFile(atomic);
}

FcChar8 * FcAtomicOrigFile(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcAtomicOrigFile(atomic);
}

FcBool FcAtomicReplaceOrig(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcAtomicReplaceOrig(atomic);
}

void FcAtomicDeleteNew(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcAtomicDeleteNew(atomic);
}

void FcAtomicUnlock(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcAtomicUnlock(atomic);
}

void FcAtomicDestroy(FcAtomic * atomic) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcAtomicDestroy(atomic);
}

FcPattern * FcFontSetMatch(FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcResult * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSetMatch(config,sets,nsets,p,result);
}

FcPattern * FcFontMatch(FcConfig * config, FcPattern * p, FcResult * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontMatch(config,p,result);
}

FcPattern * FcFontRenderPrepare(FcConfig * config, FcPattern * pat, FcPattern * font) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontRenderPrepare(config,pat,font);
}

FcFontSet * FcFontSetSort(FcConfig * config, FcFontSet * *sets, int nsets, FcPattern * p, FcBool trim, FcCharSet * *csp, FcResult * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSetSort(config,sets,nsets,p,trim,csp,result);
}

FcFontSet * FcFontSort(FcConfig * config, FcPattern * p, FcBool trim, FcCharSet * *csp, FcResult * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcFontSort(config,p,trim,csp,result);
}

void FcFontSetSortDestroy(FcFontSet * fs) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcFontSetSortDestroy(fs);
}

FcMatrix * FcMatrixCopy(const FcMatrix * mat) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcMatrixCopy(mat);
}

FcBool FcMatrixEqual(const FcMatrix * mat1, const FcMatrix * mat2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcMatrixEqual(mat1,mat2);
}

void FcMatrixMultiply(FcMatrix * result, const FcMatrix * a, const FcMatrix * b) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcMatrixMultiply(result,a,b);
}

void FcMatrixRotate(FcMatrix * m, double c, double s) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcMatrixRotate(m,c,s);
}

void FcMatrixScale(FcMatrix * m, double sx, double sy) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcMatrixScale(m,sx,sy);
}

void FcMatrixShear(FcMatrix * m, double sh, double sv) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcMatrixShear(m,sh,sv);
}

FcBool FcNameRegisterObjectTypes(const FcObjectType * types, int ntype) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameRegisterObjectTypes(types,ntype);
}

FcBool FcNameUnregisterObjectTypes(const FcObjectType * types, int ntype) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameUnregisterObjectTypes(types,ntype);
}

const FcObjectType * FcNameGetObjectType(const char * object) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameGetObjectType(object);
}

FcBool FcNameRegisterConstants(const FcConstant * consts, int nconsts) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameRegisterConstants(consts,nconsts);
}

FcBool FcNameUnregisterConstants(const FcConstant * consts, int nconsts) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameUnregisterConstants(consts,nconsts);
}

const FcConstant * FcNameGetConstant(const FcChar8 * string) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameGetConstant(string);
}

const FcConstant * FcNameGetConstantFor(const FcChar8 * string, const char * object) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameGetConstantFor(string,object);
}

FcBool FcNameConstant(const FcChar8 * string, int * result) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameConstant(string,result);
}

FcPattern * FcNameParse(const FcChar8 * name) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameParse(name);
}

FcChar8 * FcNameUnparse(FcPattern * pat) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcNameUnparse(pat);
}

FcPattern * FcPatternCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternCreate();
}

FcPattern * FcPatternDuplicate(const FcPattern * p) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternDuplicate(p);
}

void FcPatternReference(FcPattern * p) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcPatternReference(p);
}

FcPattern * FcPatternFilter(FcPattern * p, const FcObjectSet * os) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternFilter(p,os);
}

void FcValueDestroy(FcValue v) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcValueDestroy(v);
}

FcBool FcValueEqual(FcValue va, FcValue vb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcValueEqual(va,vb);
}

FcValue FcValueSave(FcValue v) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcValueSave(v);
}

void FcPatternDestroy(FcPattern * p) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcPatternDestroy(p);
}

FcBool FcPatternEqual(const FcPattern * pa, const FcPattern * pb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternEqual(pa,pb);
}

FcBool FcPatternEqualSubset(const FcPattern * pa, const FcPattern * pb, const FcObjectSet * os) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternEqualSubset(pa,pb,os);
}

FcChar32 FcPatternHash(const FcPattern * p) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternHash(p);
}

FcBool FcPatternAdd(FcPattern * p, const char * object, FcValue value, FcBool append) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAdd(p,object,value,append);
}

FcBool FcPatternAddWeak(FcPattern * p, const char * object, FcValue value, FcBool append) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddWeak(p,object,value,append);
}

FcResult FcPatternGet(const FcPattern * p, const char * object, int id, FcValue * v) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGet(p,object,id,v);
}

FcResult FcPatternGetWithBinding(const FcPattern * p, const char * object, int id, FcValue * v, FcValueBinding * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetWithBinding(p,object,id,v,b);
}

FcBool FcPatternDel(FcPattern * p, const char * object) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternDel(p,object);
}

FcBool FcPatternRemove(FcPattern * p, const char * object, int id) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternRemove(p,object,id);
}

FcBool FcPatternAddInteger(FcPattern * p, const char * object, int i) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddInteger(p,object,i);
}

FcBool FcPatternAddDouble(FcPattern * p, const char * object, double d) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddDouble(p,object,d);
}

FcBool FcPatternAddString(FcPattern * p, const char * object, const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddString(p,object,s);
}

FcBool FcPatternAddMatrix(FcPattern * p, const char * object, const FcMatrix * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddMatrix(p,object,s);
}

FcBool FcPatternAddCharSet(FcPattern * p, const char * object, const FcCharSet * c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddCharSet(p,object,c);
}

FcBool FcPatternAddBool(FcPattern * p, const char * object, FcBool b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddBool(p,object,b);
}

FcBool FcPatternAddLangSet(FcPattern * p, const char * object, const FcLangSet * ls) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddLangSet(p,object,ls);
}

FcBool FcPatternAddRange(FcPattern * p, const char * object, const FcRange * r) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternAddRange(p,object,r);
}

FcResult FcPatternGetInteger(const FcPattern * p, const char * object, int n, int * i) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetInteger(p,object,n,i);
}

FcResult FcPatternGetDouble(const FcPattern * p, const char * object, int n, double * d) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetDouble(p,object,n,d);
}

FcResult FcPatternGetString(const FcPattern * p, const char * object, int n, FcChar8 ** s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetString(p,object,n,s);
}

FcResult FcPatternGetMatrix(const FcPattern * p, const char * object, int n, FcMatrix * *s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetMatrix(p,object,n,s);
}

FcResult FcPatternGetCharSet(const FcPattern * p, const char * object, int n, FcCharSet * *c) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetCharSet(p,object,n,c);
}

FcResult FcPatternGetBool(const FcPattern * p, const char * object, int n, FcBool * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetBool(p,object,n,b);
}

FcResult FcPatternGetLangSet(const FcPattern * p, const char * object, int n, FcLangSet * *ls) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetLangSet(p,object,n,ls);
}

FcResult FcPatternGetRange(const FcPattern * p, const char * object, int id, FcRange * *r) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternGetRange(p,object,id,r);
}

FcPattern * FcPatternVaBuild(FcPattern * p, va_list va) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternVaBuild(p,va);
}

FcPattern * FcPatternBuild(FcPattern * p, ...) {
	extern struct FontconfigIFace *IFontconfig;

	va_list ap;
	va_start(ap, p);
	FcPattern *ret = IFontconfig->FcPatternBuild(p, ap);
	va_end(ap);
	return ret;
}

FcChar8 * FcPatternFormat(FcPattern * pat, const FcChar8 * format) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternFormat(pat,format);
}

FcRange * FcRangeCreateDouble(double begin, double end) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcRangeCreateDouble(begin,end);
}

FcRange * FcRangeCreateInteger(FcChar32 begin, FcChar32 end) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcRangeCreateInteger(begin,end);
}

void FcRangeDestroy(FcRange * range) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcRangeDestroy(range);
}

FcRange * FcRangeCopy(const FcRange * r) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcRangeCopy(r);
}

FcBool FcRangeGetDouble(const FcRange * range, double * begin, double * end) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcRangeGetDouble(range,begin,end);
}

void FcPatternIterStart(const FcPattern * pat, FcPatternIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcPatternIterStart(pat,iter);
}

FcBool FcPatternIterNext(const FcPattern * pat, FcPatternIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterNext(pat,iter);
}

FcBool FcPatternIterEqual(const FcPattern * p1, FcPatternIter * i1, const FcPattern * p2, FcPatternIter * i2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterEqual(p1,i1,p2,i2);
}

FcBool FcPatternFindIter(const FcPattern * pat, FcPatternIter * iter, const char * object) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternFindIter(pat,iter,object);
}

FcBool FcPatternIterIsValid(const FcPattern * pat, FcPatternIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterIsValid(pat,iter);
}

const char * FcPatternIterGetObject(const FcPattern * pat, FcPatternIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterGetObject(pat,iter);
}

int FcPatternIterValueCount(const FcPattern * pat, FcPatternIter * iter) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterValueCount(pat,iter);
}

FcResult FcPatternIterGetValue(const FcPattern * pat, FcPatternIter * iter, int id, FcValue * v, FcValueBinding * b) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcPatternIterGetValue(pat,iter,id,v,b);
}

int FcWeightFromOpenType(int ot_weight) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcWeightFromOpenType(ot_weight);
}

double FcWeightFromOpenTypeDouble(double ot_weight) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcWeightFromOpenTypeDouble(ot_weight);
}

int FcWeightToOpenType(int fc_weight) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcWeightToOpenType(fc_weight);
}

double FcWeightToOpenTypeDouble(double fc_weight) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcWeightToOpenTypeDouble(fc_weight);
}

FcChar8 * FcStrCopy(const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrCopy(s);
}

FcChar8 * FcStrCopyFilename(const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrCopyFilename(s);
}

FcChar8 * FcStrPlus(const FcChar8 * s1, const FcChar8 * s2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrPlus(s1,s2);
}

void FcStrFree(FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcStrFree(s);
}

FcChar8 * FcStrDowncase(const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrDowncase(s);
}

int FcStrCmpIgnoreCase(const FcChar8 * s1, const FcChar8 * s2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrCmpIgnoreCase(s1,s2);
}

int FcStrCmp(const FcChar8 * s1, const FcChar8 * s2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrCmp(s1,s2);
}

const FcChar8 * FcStrStrIgnoreCase(const FcChar8 * s1, const FcChar8 * s2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrStrIgnoreCase(s1,s2);
}

const FcChar8 * FcStrStr(const FcChar8 * s1, const FcChar8 * s2) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrStr(s1,s2);
}

int FcUtf8ToUcs4(const FcChar8 * src_orig, FcChar32 * dst, int len) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcUtf8ToUcs4(src_orig,dst,len);
}

FcBool FcUtf8Len(const FcChar8 * string, int len, int * nchar, int * wchar) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcUtf8Len(string,len,nchar,wchar);
}

int FcUcs4ToUtf8(FcChar32 ucs4, FcChar8 dest[FC_UTF8_MAX_LEN]) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcUcs4ToUtf8(ucs4,dest);
}

int FcUtf16ToUcs4(const FcChar8 * src_orig, FcEndian endian, FcChar32 * dst, int len) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcUtf16ToUcs4(src_orig,endian,dst,len);
}

FcBool FcUtf16Len(const FcChar8 * string, FcEndian endian, int len, int * nchar, int * wchar) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcUtf16Len(string,endian,len,nchar,wchar);
}

FcChar8 * FcStrBuildFilename(const FcChar8 * path, ...) {
	extern struct FontconfigIFace *IFontconfig;

	va_list ap;
	va_start(ap, path);
	FcChar8 *ret = IFontconfig->FcStrBuildFilename(path, ap);
	va_end(ap);
	return ret;
}

FcChar8 * FcStrDirname(const FcChar8 * file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrDirname(file);
}

FcChar8 * FcStrBasename(const FcChar8 * file) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrBasename(file);
}

FcStrSet * FcStrSetCreate(void) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetCreate();
}

FcBool FcStrSetMember(FcStrSet * set, const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetMember(set,s);
}

FcBool FcStrSetEqual(FcStrSet * sa, FcStrSet * sb) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetEqual(sa,sb);
}

FcBool FcStrSetAdd(FcStrSet * set, const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetAdd(set,s);
}

FcBool FcStrSetAddFilename(FcStrSet * set, const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetAddFilename(set,s);
}

FcBool FcStrSetDel(FcStrSet * set, const FcChar8 * s) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrSetDel(set,s);
}

void FcStrSetDestroy(FcStrSet * set) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcStrSetDestroy(set);
}

FcStrList * FcStrListCreate(FcStrSet * set) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrListCreate(set);
}

void FcStrListFirst(FcStrList * list) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcStrListFirst(list);
}

FcChar8 * FcStrListNext(FcStrList * list) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcStrListNext(list);
}

void FcStrListDone(FcStrList * list) {
	extern struct FontconfigIFace *IFontconfig;

	IFontconfig->FcStrListDone(list);
}

FcBool FcConfigParseAndLoad(FcConfig * config, const FcChar8 * file, FcBool complain) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigParseAndLoad(config,file,complain);
}

FcBool FcConfigParseAndLoadFromMemory(FcConfig * config, const FcChar8 * buffer, FcBool complain) {
	extern struct FontconfigIFace *IFontconfig;

	return IFontconfig->FcConfigParseAndLoadFromMemory(config,buffer,complain);
}

