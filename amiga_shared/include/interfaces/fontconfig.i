#ifndef FONTCONFIG_INTERFACE_DEF_H
#define FONTCONFIG_INTERFACE_DEF_H
/*
** This file was machine generated by idltool.py 54.8.
** Do not edit.
*/

#include <exec/types.i>
#include <exec/exec.i>
#include <exec/interfaces.i>

STRUCTURE FontconfigIFace, InterfaceData_SIZE
	    FPTR IFontconfig_Obtain
	    FPTR IFontconfig_Release
	    FPTR FontconfigIFace_Expunge_UNIMPLEMENTED
	    FPTR FontconfigIFace_Clone_UNIMPLEMENTED
	    FPTR IFontconfig_FcConfigGetRescanInverval
	    FPTR IFontconfig_FcConfigSetRescanInverval
	    FPTR IFontconfig_FcFreeTypeCharIndex
	    FPTR IFontconfig_FcFreeTypeCharSetAndSpacing
	    FPTR IFontconfig_FcFreeTypeCharSet
	    FPTR IFontconfig_FcPatternGetFTFace
	    FPTR IFontconfig_FcPatternAddFTFace
	    FPTR IFontconfig_FcFreeTypeQueryFace
	    FPTR IFontconfig_FcBlanksCreate
	    FPTR IFontconfig_FcBlanksDestroy
	    FPTR IFontconfig_FcBlanksAdd
	    FPTR IFontconfig_FcBlanksIsMember
	    FPTR IFontconfig_FcCacheDir
	    FPTR IFontconfig_FcCacheCopySet
	    FPTR IFontconfig_FcCacheSubdir
	    FPTR IFontconfig_FcCacheNumSubdir
	    FPTR IFontconfig_FcCacheNumFont
	    FPTR IFontconfig_FcDirCacheUnlink
	    FPTR IFontconfig_FcDirCacheValid
	    FPTR IFontconfig_FcDirCacheClean
	    FPTR IFontconfig_FcCacheCreateTagFile
	    FPTR IFontconfig_FcDirCacheCreateUUID
	    FPTR IFontconfig_FcDirCacheDeleteUUID
	    FPTR IFontconfig_FcConfigHome
	    FPTR IFontconfig_FcConfigEnableHome
	    FPTR IFontconfig_FcConfigGetFilename
	    FPTR IFontconfig_FcConfigFilename
	    FPTR IFontconfig_FcConfigCreate
	    FPTR IFontconfig_FcConfigReference
	    FPTR IFontconfig_FcConfigDestroy
	    FPTR IFontconfig_FcConfigSetCurrent
	    FPTR IFontconfig_FcConfigGetCurrent
	    FPTR IFontconfig_FcConfigUptoDate
	    FPTR IFontconfig_FcConfigBuildFonts
	    FPTR IFontconfig_FcConfigGetFontDirs
	    FPTR IFontconfig_FcConfigGetConfigDirs
	    FPTR IFontconfig_FcConfigGetConfigFiles
	    FPTR IFontconfig_FcConfigGetCache
	    FPTR IFontconfig_FcConfigGetBlanks
	    FPTR IFontconfig_FcConfigGetCacheDirs
	    FPTR IFontconfig_FcConfigGetRescanInterval
	    FPTR IFontconfig_FcConfigSetRescanInterval
	    FPTR IFontconfig_FcConfigGetFonts
	    FPTR IFontconfig_FcConfigAcceptFont
	    FPTR IFontconfig_FcConfigAppFontAddFile
	    FPTR IFontconfig_FcConfigAppFontAddDir
	    FPTR IFontconfig_FcConfigAppFontClear
	    FPTR IFontconfig_FcConfigSubstituteWithPat
	    FPTR IFontconfig_FcConfigSubstitute
	    FPTR IFontconfig_FcConfigGetSysRoot
	    FPTR IFontconfig_FcConfigSetSysRoot
	    FPTR IFontconfig_FcConfigFileInfoIterInit
	    FPTR IFontconfig_FcConfigFileInfoIterNext
	    FPTR IFontconfig_FcConfigFileInfoIterGet
	    FPTR IFontconfig_FcCharSetCreate
	    FPTR IFontconfig_FcCharSetNew
	    FPTR IFontconfig_FcCharSetDestroy
	    FPTR IFontconfig_FcCharSetAddChar
	    FPTR IFontconfig_FcCharSetDelChar
	    FPTR IFontconfig_FcCharSetCopy
	    FPTR IFontconfig_FcCharSetEqual
	    FPTR IFontconfig_FcCharSetIntersect
	    FPTR IFontconfig_FcCharSetUnion
	    FPTR IFontconfig_FcCharSetSubtract
	    FPTR IFontconfig_FcCharSetMerge
	    FPTR IFontconfig_FcCharSetHasChar
	    FPTR IFontconfig_FcCharSetCount
	    FPTR IFontconfig_FcCharSetIntersectCount
	    FPTR IFontconfig_FcCharSetSubtractCount
	    FPTR IFontconfig_FcCharSetIsSubset
	    FPTR IFontconfig_FcCharSetFirstPage
	    FPTR IFontconfig_FcCharSetNextPage
	    FPTR IFontconfig_FcCharSetCoverage
	    FPTR IFontconfig_FcValuePrint
	    FPTR IFontconfig_FcPatternPrint
	    FPTR IFontconfig_FcFontSetPrint
	    FPTR IFontconfig_FcGetDefaultLangs
	    FPTR IFontconfig_FcDefaultSubstitute
	    FPTR IFontconfig_FcFileIsDir
	    FPTR IFontconfig_FcFileScan
	    FPTR IFontconfig_FcDirScan
	    FPTR IFontconfig_FcDirSave
	    FPTR IFontconfig_FcDirCacheLoad
	    FPTR IFontconfig_FcDirCacheRescan
	    FPTR IFontconfig_FcDirCacheRead
	    FPTR IFontconfig_FcDirCacheLoadFile
	    FPTR IFontconfig_FcDirCacheUnload
	    FPTR IFontconfig_FcFreeTypeQuery
	    FPTR IFontconfig_FcFreeTypeQueryAll
	    FPTR IFontconfig_FcFontSetCreate
	    FPTR IFontconfig_FcFontSetDestroy
	    FPTR IFontconfig_FcFontSetAdd
	    FPTR IFontconfig_FcInitLoadConfig
	    FPTR IFontconfig_FcInitLoadConfigAndFonts
	    FPTR IFontconfig_FcInit
	    FPTR IFontconfig_FcFini
	    FPTR IFontconfig_FcGetVersion
	    FPTR IFontconfig_FcInitReinitialize
	    FPTR IFontconfig_FcInitBringUptoDate
	    FPTR IFontconfig_FcGetLangs
	    FPTR IFontconfig_FcLangNormalize
	    FPTR IFontconfig_FcLangGetCharSet
	    FPTR IFontconfig_FcLangSetCreate
	    FPTR IFontconfig_FcLangSetDestroy
	    FPTR IFontconfig_FcLangSetCopy
	    FPTR IFontconfig_FcLangSetAdd
	    FPTR IFontconfig_FcLangSetDel
	    FPTR IFontconfig_FcLangSetHasLang
	    FPTR IFontconfig_FcLangSetCompare
	    FPTR IFontconfig_FcLangSetContains
	    FPTR IFontconfig_FcLangSetEqual
	    FPTR IFontconfig_FcLangSetHash
	    FPTR IFontconfig_FcLangSetGetLangs
	    FPTR IFontconfig_FcLangSetUnion
	    FPTR IFontconfig_FcLangSetSubtract
	    FPTR IFontconfig_FcObjectSetCreate
	    FPTR IFontconfig_FcObjectSetAdd
	    FPTR IFontconfig_FcObjectSetDestroy
	    FPTR IFontconfig_FcObjectSetVaBuild
	    FPTR IFontconfig_FcObjectSetBuild
	    FPTR IFontconfig_FcFontSetList
	    FPTR IFontconfig_FcFontList
	    FPTR IFontconfig_FcAtomicCreate
	    FPTR IFontconfig_FcAtomicLock
	    FPTR IFontconfig_FcAtomicNewFile
	    FPTR IFontconfig_FcAtomicOrigFile
	    FPTR IFontconfig_FcAtomicReplaceOrig
	    FPTR IFontconfig_FcAtomicDeleteNew
	    FPTR IFontconfig_FcAtomicUnlock
	    FPTR IFontconfig_FcAtomicDestroy
	    FPTR IFontconfig_FcFontSetMatch
	    FPTR IFontconfig_FcFontMatch
	    FPTR IFontconfig_FcFontRenderPrepare
	    FPTR IFontconfig_FcFontSetSort
	    FPTR IFontconfig_FcFontSort
	    FPTR IFontconfig_FcFontSetSortDestroy
	    FPTR IFontconfig_FcMatrixCopy
	    FPTR IFontconfig_FcMatrixEqual
	    FPTR IFontconfig_FcMatrixMultiply
	    FPTR IFontconfig_FcMatrixRotate
	    FPTR IFontconfig_FcMatrixScale
	    FPTR IFontconfig_FcMatrixShear
	    FPTR IFontconfig_FcNameRegisterObjectTypes
	    FPTR IFontconfig_FcNameUnregisterObjectTypes
	    FPTR IFontconfig_FcNameGetObjectType
	    FPTR IFontconfig_FcNameRegisterConstants
	    FPTR IFontconfig_FcNameUnregisterConstants
	    FPTR IFontconfig_FcNameGetConstant
	    FPTR IFontconfig_FcNameGetConstantFor
	    FPTR IFontconfig_FcNameConstant
	    FPTR IFontconfig_FcNameParse
	    FPTR IFontconfig_FcNameUnparse
	    FPTR IFontconfig_FcPatternCreate
	    FPTR IFontconfig_FcPatternDuplicate
	    FPTR IFontconfig_FcPatternReference
	    FPTR IFontconfig_FcPatternFilter
	    FPTR IFontconfig_FcValueDestroy
	    FPTR IFontconfig_FcValueEqual
	    FPTR IFontconfig_FcValueSave
	    FPTR IFontconfig_FcPatternDestroy
	    FPTR IFontconfig_FcPatternEqual
	    FPTR IFontconfig_FcPatternEqualSubset
	    FPTR IFontconfig_FcPatternHash
	    FPTR IFontconfig_FcPatternAdd
	    FPTR IFontconfig_FcPatternAddWeak
	    FPTR IFontconfig_FcPatternGet
	    FPTR IFontconfig_FcPatternGetWithBinding
	    FPTR IFontconfig_FcPatternDel
	    FPTR IFontconfig_FcPatternRemove
	    FPTR IFontconfig_FcPatternAddInteger
	    FPTR IFontconfig_FcPatternAddDouble
	    FPTR IFontconfig_FcPatternAddString
	    FPTR IFontconfig_FcPatternAddMatrix
	    FPTR IFontconfig_FcPatternAddCharSet
	    FPTR IFontconfig_FcPatternAddBool
	    FPTR IFontconfig_FcPatternAddLangSet
	    FPTR IFontconfig_FcPatternAddRange
	    FPTR IFontconfig_FcPatternGetInteger
	    FPTR IFontconfig_FcPatternGetDouble
	    FPTR IFontconfig_FcPatternGetString
	    FPTR IFontconfig_FcPatternGetMatrix
	    FPTR IFontconfig_FcPatternGetCharSet
	    FPTR IFontconfig_FcPatternGetBool
	    FPTR IFontconfig_FcPatternGetLangSet
	    FPTR IFontconfig_FcPatternGetRange
	    FPTR IFontconfig_FcPatternVaBuild
	    FPTR IFontconfig_FcPatternBuild
	    FPTR IFontconfig_FcPatternFormat
	    FPTR IFontconfig_FcRangeCreateDouble
	    FPTR IFontconfig_FcRangeCreateInteger
	    FPTR IFontconfig_FcRangeDestroy
	    FPTR IFontconfig_FcRangeCopy
	    FPTR IFontconfig_FcRangeGetDouble
	    FPTR IFontconfig_FcPatternIterStart
	    FPTR IFontconfig_FcPatternIterNext
	    FPTR IFontconfig_FcPatternIterEqual
	    FPTR IFontconfig_FcPatternFindIter
	    FPTR IFontconfig_FcPatternIterIsValid
	    FPTR IFontconfig_FcPatternIterGetObject
	    FPTR IFontconfig_FcPatternIterValueCount
	    FPTR IFontconfig_FcPatternIterGetValue
	    FPTR IFontconfig_FcWeightFromOpenType
	    FPTR IFontconfig_FcWeightFromOpenTypeDouble
	    FPTR IFontconfig_FcWeightToOpenType
	    FPTR IFontconfig_FcWeightToOpenTypeDouble
	    FPTR IFontconfig_FcStrCopy
	    FPTR IFontconfig_FcStrCopyFilename
	    FPTR IFontconfig_FcStrPlus
	    FPTR IFontconfig_FcStrFree
	    FPTR IFontconfig_FcStrDowncase
	    FPTR IFontconfig_FcStrCmpIgnoreCase
	    FPTR IFontconfig_FcStrCmp
	    FPTR IFontconfig_FcStrStrIgnoreCase
	    FPTR IFontconfig_FcStrStr
	    FPTR IFontconfig_FcUtf8ToUcs4
	    FPTR IFontconfig_FcUtf8Len
	    FPTR IFontconfig_FcUcs4ToUtf8
	    FPTR IFontconfig_FcUtf16ToUcs4
	    FPTR IFontconfig_FcUtf16Len
	    FPTR IFontconfig_FcStrBuildFilename
	    FPTR IFontconfig_FcStrDirname
	    FPTR IFontconfig_FcStrBasename
	    FPTR IFontconfig_FcStrSetCreate
	    FPTR IFontconfig_FcStrSetMember
	    FPTR IFontconfig_FcStrSetEqual
	    FPTR IFontconfig_FcStrSetAdd
	    FPTR IFontconfig_FcStrSetAddFilename
	    FPTR IFontconfig_FcStrSetDel
	    FPTR IFontconfig_FcStrSetDestroy
	    FPTR IFontconfig_FcStrListCreate
	    FPTR IFontconfig_FcStrListFirst
	    FPTR IFontconfig_FcStrListNext
	    FPTR IFontconfig_FcStrListDone
	    FPTR IFontconfig_FcConfigParseAndLoad
	    FPTR IFontconfig_FcConfigParseAndLoadFromMemory
	LABEL FontconfigIFace_SIZE

#endif /* FONTCONFIG_INTERFACE_DEF_H */
