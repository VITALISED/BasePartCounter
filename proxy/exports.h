//  exports.h
//
//	Simple header to instruct the linker to forward function exports to another library.
//

#pragma comment(linker,"/export:ProfanityFilter_Create=ProfanityFilter_x64_v120_orig.ProfanityFilter_Create,@1")
#pragma comment(linker,"/export:ProfanityFilter_Destroy=ProfanityFilter_x64_v120_orig.ProfanityFilter_Destroy,@2")
#pragma comment(linker,"/export:ProfanityFilter_Filter=ProfanityFilter_x64_v120_orig.ProfanityFilter_Filter,@3")
#pragma comment(linker,"/export:ProfanityFilter_Filter_BracketFormat=ProfanityFilter_x64_v120_orig.ProfanityFilter_Filter_BracketFormat,@4")
#pragma comment(linker,"/export:ProfanityFilter_Filter_Custom=ProfanityFilter_x64_v120_orig.ProfanityFilter_Filter_Custom,@5")
#pragma comment(linker,"/export:ProfanityFilter_GetDictionaryBuildIdentifier=ProfanityFilter_x64_v120_orig.ProfanityFilter_GetDictionaryBuildIdentifier,@6")
#pragma comment(linker,"/export:ProfanityFilter_GetDictionaryFormatVersion=ProfanityFilter_x64_v120_orig.ProfanityFilter_GetDictionaryFormatVersion,@7")
#pragma comment(linker,"/export:ProfanityFilter_GetRequiredBufferSize=ProfanityFilter_x64_v120_orig.ProfanityFilter_GetRequiredBufferSize,@8")
#pragma comment(linker,"/export:ProfanityFilter_GetRequiredBufferSize_BracketFormat=ProfanityFilter_x64_v120_orig.ProfanityFilter_GetRequiredBufferSize_BracketFormat,@9")
#pragma comment(linker,"/export:ProfanityFilter_SetAllocator=ProfanityFilter_x64_v120_orig.ProfanityFilter_SetAllocator,@10")
