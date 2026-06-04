#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParamsArray.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/StringSplitOptions.h"
#include "unitysdk/System/Text/NormalizationForm.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class CharEnumerator; }
namespace System { class IFormatProvider; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_STRING_BZERO_ALIGNED_1_OFFSET UNITYSDK_OFFSET(0x185E5120)
#define SYSTEM_STRING_BZERO_ALIGNED_2_OFFSET UNITYSDK_OFFSET(0x185E5130)
#define SYSTEM_STRING_BZERO_ALIGNED_4_OFFSET UNITYSDK_OFFSET(0x185E5140)
#define SYSTEM_STRING_BZERO_ALIGNED_8_OFFSET UNITYSDK_OFFSET(0x185E5150)
#define SYSTEM_STRING_BZERO_OFFSET UNITYSDK_OFFSET(0x185E5110)
#define SYSTEM_STRING_CHARCOPY_OFFSET UNITYSDK_OFFSET(0x185E3F90)
#define SYSTEM_STRING_CLONE_OFFSET UNITYSDK_OFFSET(0x185E1940)
#define SYSTEM_STRING_COMPAREORDINALHELPER_OFFSET UNITYSDK_OFFSET(0x185DBDC0)
#define SYSTEM_STRING_COMPAREORDINALIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x185DBB50)
#define SYSTEM_STRING_COMPAREORDINALUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E3840)
#define SYSTEM_STRING_COMPAREORDINAL_1_OFFSET UNITYSDK_OFFSET(0x185DD950)
#define SYSTEM_STRING_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x185DF840)
#define SYSTEM_STRING_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x185DF760)
#define SYSTEM_STRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x185DF600)
#define SYSTEM_STRING_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x185DED20)
#define SYSTEM_STRING_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x185D7EB0)
#define SYSTEM_STRING_COMPARE_3_OFFSET UNITYSDK_OFFSET(0x185DEE30)
#define SYSTEM_STRING_COMPARE_4_OFFSET UNITYSDK_OFFSET(0x185DEEE0)
#define SYSTEM_STRING_COMPARE_5_OFFSET UNITYSDK_OFFSET(0x185DEF80)
#define SYSTEM_STRING_COMPARE_6_OFFSET UNITYSDK_OFFSET(0x185DF0A0)
#define SYSTEM_STRING_COMPARE_7_OFFSET UNITYSDK_OFFSET(0x185DF220)
#define SYSTEM_STRING_COMPARE_8_OFFSET UNITYSDK_OFFSET(0x185DF360)
#define SYSTEM_STRING_COMPARE_9_OFFSET UNITYSDK_OFFSET(0x185D9060)
#define SYSTEM_STRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x185DEC50)
#define SYSTEM_STRING_CONCATARRAY_OFFSET UNITYSDK_OFFSET(0x185E2970)
#define SYSTEM_STRING_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x185E2640)
#define SYSTEM_STRING_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x185E26D0)
#define SYSTEM_STRING_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x185E27D0)
#define SYSTEM_STRING_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x185E27F0)
#define SYSTEM_STRING_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x185E2AC0)
#define SYSTEM_STRING_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x185B9690)
#define SYSTEM_STRING_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x185D23D0)
#define SYSTEM_STRING_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x185E2F00)
#define SYSTEM_STRING_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x185E31C0)
#define SYSTEM_STRING_CONCAT_OFFSET UNITYSDK_OFFSET(0x185E2610)
#define SYSTEM_STRING_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185DF880)
#define SYSTEM_STRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x185DC8B0)
#define SYSTEM_STRING_COPY_OFFSET UNITYSDK_OFFSET(0x185E2510)
#define SYSTEM_STRING_CREATESTRINGFROMENCODING_OFFSET UNITYSDK_OFFSET(0x185DDF60)
#define SYSTEM_STRING_CREATESTRING_1_OFFSET UNITYSDK_OFFSET(0x185E5580)
#define SYSTEM_STRING_CREATESTRING_2_OFFSET UNITYSDK_OFFSET(0x185E55A0)
#define SYSTEM_STRING_CREATESTRING_3_OFFSET UNITYSDK_OFFSET(0x185E55B0)
#define SYSTEM_STRING_CREATESTRING_4_OFFSET UNITYSDK_OFFSET(0x185D99A0)
#define SYSTEM_STRING_CREATESTRING_5_OFFSET UNITYSDK_OFFSET(0x185CAB50)
#define SYSTEM_STRING_CREATESTRING_6_OFFSET UNITYSDK_OFFSET(0x185D8E90)
#define SYSTEM_STRING_CREATESTRING_7_OFFSET UNITYSDK_OFFSET(0x185E5230)
#define SYSTEM_STRING_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x185E51A0)
#define SYSTEM_STRING_CREATETRIMMEDSTRING_OFFSET UNITYSDK_OFFSET(0x185E1960)
#define SYSTEM_STRING_CTORCHARARRAYSTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x185DE550)
#define SYSTEM_STRING_CTORCHARARRAY_OFFSET UNITYSDK_OFFSET(0x185DE4A0)
#define SYSTEM_STRING_CTORCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185DE6F0)
#define SYSTEM_STRING_CTORCHARPTRSTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x185DEAF0)
#define SYSTEM_STRING_CTORCHARPTR_OFFSET UNITYSDK_OFFSET(0x185DE910)
#define SYSTEM_STRING_ENDSWITH_1_OFFSET UNITYSDK_OFFSET(0x185D47D0)
#define SYSTEM_STRING_ENDSWITH_2_OFFSET UNITYSDK_OFFSET(0x185DF8E0)
#define SYSTEM_STRING_ENDSWITH_3_OFFSET UNITYSDK_OFFSET(0x185DFA30)
#define SYSTEM_STRING_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x185DF8D0)
#define SYSTEM_STRING_EQUALSHELPER_OFFSET UNITYSDK_OFFSET(0x185DBD00)
#define SYSTEM_STRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185D46F0)
#define SYSTEM_STRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x185DC010)
#define SYSTEM_STRING_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x185DC420)
#define SYSTEM_STRING_EQUALS_4_OFFSET UNITYSDK_OFFSET(0x185DC4D0)
#define SYSTEM_STRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x185DBF30)
#define SYSTEM_STRING_FASTALLOCATESTRING_OFFSET UNITYSDK_OFFSET(0x185DBAF0)
#define SYSTEM_STRING_FILLSTRINGCHECKED_OFFSET UNITYSDK_OFFSET(0x185DE410)
#define SYSTEM_STRING_FORMATHELPER_OFFSET UNITYSDK_OFFSET(0x185E2180)
#define SYSTEM_STRING_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x185D9AC0)
#define SYSTEM_STRING_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x185E22A0)
#define SYSTEM_STRING_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x185E22E0)
#define SYSTEM_STRING_FORMAT_4_OFFSET UNITYSDK_OFFSET(0x185E23B0)
#define SYSTEM_STRING_FORMAT_5_OFFSET UNITYSDK_OFFSET(0x185E23F0)
#define SYSTEM_STRING_FORMAT_6_OFFSET UNITYSDK_OFFSET(0x185E2430)
#define SYSTEM_STRING_FORMAT_7_OFFSET UNITYSDK_OFFSET(0x185E2470)
#define SYSTEM_STRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x185CD470)
#define SYSTEM_STRING_GETBYTESFROMENCODING_OFFSET UNITYSDK_OFFSET(0x185DE030)
#define SYSTEM_STRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185E3760)
#define SYSTEM_STRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185CE430)
#define SYSTEM_STRING_GETLEGACYNONRANDOMIZEDHASHCODE_OFFSET UNITYSDK_OFFSET(0x185DCC20)
#define SYSTEM_STRING_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x185E3370)
#define SYSTEM_STRING_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x185CAB00)
#define SYSTEM_STRING_GET_FIRSTCHAR_OFFSET UNITYSDK_OFFSET(0x185DBAE0)
#define SYSTEM_STRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185E3830)
#define SYSTEM_STRING_INDEXOFANYUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E3B90)
#define SYSTEM_STRING_INDEXOFANY_1_OFFSET UNITYSDK_OFFSET(0x185DFC80)
#define SYSTEM_STRING_INDEXOFANY_2_OFFSET UNITYSDK_OFFSET(0x185DFBD0)
#define SYSTEM_STRING_INDEXOFANY_OFFSET UNITYSDK_OFFSET(0x185D35F0)
#define SYSTEM_STRING_INDEXOFUNCHECKED_1_OFFSET UNITYSDK_OFFSET(0x185E3AA0)
#define SYSTEM_STRING_INDEXOFUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E3900)
#define SYSTEM_STRING_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x185DFBC0)
#define SYSTEM_STRING_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x185CD4B0)
#define SYSTEM_STRING_INDEXOF_3_OFFSET UNITYSDK_OFFSET(0x185CD4D0)
#define SYSTEM_STRING_INDEXOF_4_OFFSET UNITYSDK_OFFSET(0x185DFCB0)
#define SYSTEM_STRING_INDEXOF_5_OFFSET UNITYSDK_OFFSET(0x185DF8B0)
#define SYSTEM_STRING_INDEXOF_6_OFFSET UNITYSDK_OFFSET(0x185DFC90)
#define SYSTEM_STRING_INDEXOF_7_OFFSET UNITYSDK_OFFSET(0x185DFD90)
#define SYSTEM_STRING_INDEXOF_8_OFFSET UNITYSDK_OFFSET(0x185DFA90)
#define SYSTEM_STRING_INDEXOF_OFFSET UNITYSDK_OFFSET(0x185DFA80)
#define SYSTEM_STRING_INSERT_OFFSET UNITYSDK_OFFSET(0x185E1A00)
#define SYSTEM_STRING_INTERNALCOPY_OFFSET UNITYSDK_OFFSET(0x185E37F0)
#define SYSTEM_STRING_INTERNALINTERN_OFFSET UNITYSDK_OFFSET(0x185E3300)
#define SYSTEM_STRING_INTERNALISINTERNED_OFFSET UNITYSDK_OFFSET(0x185E3360)
#define SYSTEM_STRING_INTERNALSPLITKEEPEMPTYENTRIES_OFFSET UNITYSDK_OFFSET(0x185DD3C0)
#define SYSTEM_STRING_INTERNALSPLITOMITEMPTYENTRIES_OFFSET UNITYSDK_OFFSET(0x185DD020)
#define SYSTEM_STRING_INTERNALSUBSTRING_OFFSET UNITYSDK_OFFSET(0x185DD980)
#define SYSTEM_STRING_INTERN_OFFSET UNITYSDK_OFFSET(0x185E32B0)
#define SYSTEM_STRING_ISASCII_OFFSET UNITYSDK_OFFSET(0x185DC3D0)
#define SYSTEM_STRING_ISBOMWHITESPACE_OFFSET UNITYSDK_OFFSET(0x185E1950)
#define SYSTEM_STRING_ISFASTSORT_OFFSET UNITYSDK_OFFSET(0x185DE200)
#define SYSTEM_STRING_ISINTERNED_OFFSET UNITYSDK_OFFSET(0x185E3310)
#define SYSTEM_STRING_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x185DE120)
#define SYSTEM_STRING_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x185DE080)
#define SYSTEM_STRING_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x185B91B0)
#define SYSTEM_STRING_ISNULLORWHITESPACE_OFFSET UNITYSDK_OFFSET(0x185DCBD0)
#define SYSTEM_STRING_JOIN_1_OFFSET UNITYSDK_OFFSET(0x185DB290)
#define SYSTEM_STRING_JOIN_2_OFFSET UNITYSDK_OFFSET(0x185DB4B0)
#define SYSTEM_STRING_JOIN_3_OFFSET UNITYSDK_OFFSET(0x185DAEB0)
#define SYSTEM_STRING_JOIN_OFFSET UNITYSDK_OFFSET(0x185DAE60)
#define SYSTEM_STRING_LASTINDEXOFANYUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E3ED0)
#define SYSTEM_STRING_LASTINDEXOFANY_1_OFFSET UNITYSDK_OFFSET(0x185E04F0)
#define SYSTEM_STRING_LASTINDEXOFANY_2_OFFSET UNITYSDK_OFFSET(0x185E0330)
#define SYSTEM_STRING_LASTINDEXOFANY_OFFSET UNITYSDK_OFFSET(0x185E0320)
#define SYSTEM_STRING_LASTINDEXOFUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E3D30)
#define SYSTEM_STRING_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x185E0310)
#define SYSTEM_STRING_LASTINDEXOF_2_OFFSET UNITYSDK_OFFSET(0x185E0500)
#define SYSTEM_STRING_LASTINDEXOF_3_OFFSET UNITYSDK_OFFSET(0x185E0A10)
#define SYSTEM_STRING_LASTINDEXOF_4_OFFSET UNITYSDK_OFFSET(0x185E0A30)
#define SYSTEM_STRING_LASTINDEXOF_5_OFFSET UNITYSDK_OFFSET(0x185E0AD0)
#define SYSTEM_STRING_LASTINDEXOF_6_OFFSET UNITYSDK_OFFSET(0x185E0AF0)
#define SYSTEM_STRING_LASTINDEXOF_7_OFFSET UNITYSDK_OFFSET(0x185E0520)
#define SYSTEM_STRING_LASTINDEXOF_8_OFFSET UNITYSDK_OFFSET(0x185E0230)
#define SYSTEM_STRING_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x185E0220)
#define SYSTEM_STRING_MAKESEPARATORLIST_1_OFFSET UNITYSDK_OFFSET(0x185DD7B0)
#define SYSTEM_STRING_MAKESEPARATORLIST_OFFSET UNITYSDK_OFFSET(0x185DCEC0)
#define SYSTEM_STRING_MEMCPY_ALIGNED_1_OFFSET UNITYSDK_OFFSET(0x185E5160)
#define SYSTEM_STRING_MEMCPY_ALIGNED_2_OFFSET UNITYSDK_OFFSET(0x185E5170)
#define SYSTEM_STRING_MEMCPY_ALIGNED_4_OFFSET UNITYSDK_OFFSET(0x185E5180)
#define SYSTEM_STRING_MEMCPY_ALIGNED_8_OFFSET UNITYSDK_OFFSET(0x185E5190)
#define SYSTEM_STRING_MEMCPY_OFFSET UNITYSDK_OFFSET(0x185E5100)
#define SYSTEM_STRING_MEMSET_OFFSET UNITYSDK_OFFSET(0x185E4F80)
#define SYSTEM_STRING_NATIVECOMPAREORDINALEX_OFFSET UNITYSDK_OFFSET(0x185DF480)
#define SYSTEM_STRING_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x185DE360)
#define SYSTEM_STRING_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x185DE210)
#define SYSTEM_STRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x185CAE70)
#define SYSTEM_STRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x185D07B0)
#define SYSTEM_STRING_PADHELPER_OFFSET UNITYSDK_OFFSET(0x185E0B20)
#define SYSTEM_STRING_PADLEFT_1_OFFSET UNITYSDK_OFFSET(0x185E0FA0)
#define SYSTEM_STRING_PADLEFT_OFFSET UNITYSDK_OFFSET(0x185E0B10)
#define SYSTEM_STRING_PADRIGHT_1_OFFSET UNITYSDK_OFFSET(0x185E0FC0)
#define SYSTEM_STRING_PADRIGHT_OFFSET UNITYSDK_OFFSET(0x185E0FB0)
#define SYSTEM_STRING_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x185E20C0)
#define SYSTEM_STRING_REMOVE_OFFSET UNITYSDK_OFFSET(0x185E1F40)
#define SYSTEM_STRING_REPLACEFALLBACK_OFFSET UNITYSDK_OFFSET(0x185E4BC0)
#define SYSTEM_STRING_REPLACEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x185E1EA0)
#define SYSTEM_STRING_REPLACEINTERNAL_OFFSET UNITYSDK_OFFSET(0x185E1B70)
#define SYSTEM_STRING_REPLACEUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E4100)
#define SYSTEM_STRING_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x185E1E00)
#define SYSTEM_STRING_REPLACE_OFFSET UNITYSDK_OFFSET(0x185E1B60)
#define SYSTEM_STRING_SMALLCHARTOUPPER_OFFSET UNITYSDK_OFFSET(0x185DBBE0)
#define SYSTEM_STRING_SPLITINTERNAL_OFFSET UNITYSDK_OFFSET(0x185DCCC0)
#define SYSTEM_STRING_SPLIT_1_OFFSET UNITYSDK_OFFSET(0x185DCE90)
#define SYSTEM_STRING_SPLIT_2_OFFSET UNITYSDK_OFFSET(0x185DCEA0)
#define SYSTEM_STRING_SPLIT_3_OFFSET UNITYSDK_OFFSET(0x185DCEB0)
#define SYSTEM_STRING_SPLIT_4_OFFSET UNITYSDK_OFFSET(0x185DD5A0)
#define SYSTEM_STRING_SPLIT_5_OFFSET UNITYSDK_OFFSET(0x185DD5B0)
#define SYSTEM_STRING_SPLIT_OFFSET UNITYSDK_OFFSET(0x185DCCB0)
#define SYSTEM_STRING_STARTSWITHORDINALUNCHECKED_OFFSET UNITYSDK_OFFSET(0x185E4F10)
#define SYSTEM_STRING_STARTSWITH_1_OFFSET UNITYSDK_OFFSET(0x185E10F0)
#define SYSTEM_STRING_STARTSWITH_2_OFFSET UNITYSDK_OFFSET(0x185E1430)
#define SYSTEM_STRING_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x185E0FD0)
#define SYSTEM_STRING_SUBSTRING_1_OFFSET UNITYSDK_OFFSET(0x185CD4F0)
#define SYSTEM_STRING_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x185DD940)
#define SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_CHAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185E3790)
#define SYSTEM_STRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185E37C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x185E3380)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x185E3400)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x185E33C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x185E36C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x185E3640)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x185E3600)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x185E3440)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x185E34C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x185E3540)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x185E33D0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x185E35C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x185E3750)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x185E3480)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x185E3500)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x185E3580)
#define SYSTEM_STRING_TOCHARARRAY_1_OFFSET UNITYSDK_OFFSET(0x185DCAC0)
#define SYSTEM_STRING_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x185DCA60)
#define SYSTEM_STRING_TOLOWERINVARIANT_OFFSET UNITYSDK_OFFSET(0x185E16D0)
#define SYSTEM_STRING_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x185E1660)
#define SYSTEM_STRING_TOLOWER_OFFSET UNITYSDK_OFFSET(0x185E1580)
#define SYSTEM_STRING_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x185E1930)
#define SYSTEM_STRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185E1920)
#define SYSTEM_STRING_TOUPPERINVARIANT_OFFSET UNITYSDK_OFFSET(0x185E18A0)
#define SYSTEM_STRING_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x185E1830)
#define SYSTEM_STRING_TOUPPER_OFFSET UNITYSDK_OFFSET(0x185E1750)
#define SYSTEM_STRING_TRIMEND_OFFSET UNITYSDK_OFFSET(0x185DDEE0)
#define SYSTEM_STRING_TRIMHELPER_1_OFFSET UNITYSDK_OFFSET(0x185DDC10)
#define SYSTEM_STRING_TRIMHELPER_OFFSET UNITYSDK_OFFSET(0x185DDA50)
#define SYSTEM_STRING_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x185DDDC0)
#define SYSTEM_STRING_TRIM_1_OFFSET UNITYSDK_OFFSET(0x185DA2B0)
#define SYSTEM_STRING_TRIM_OFFSET UNITYSDK_OFFSET(0x185DDA20)
#define SYSTEM_STRING_WCSLEN_OFFSET UNITYSDK_OFFSET(0x185DE890)
#define SYSTEM_STRING_WSTRCPY_OFFSET UNITYSDK_OFFSET(0x185DCA50)
#define SYSTEM_STRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185DDF20)
#define SYSTEM_STRING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185DDF30)
#define SYSTEM_STRING__CTOR_3_OFFSET UNITYSDK_OFFSET(0x185DDF40)
#define SYSTEM_STRING__CTOR_4_OFFSET UNITYSDK_OFFSET(0x185DDF50)
#define SYSTEM_STRING__CTOR_5_OFFSET UNITYSDK_OFFSET(0x185DE480)
#define SYSTEM_STRING__CTOR_6_OFFSET UNITYSDK_OFFSET(0x185DE490)
#define SYSTEM_STRING__CTOR_7_OFFSET UNITYSDK_OFFSET(0x185DEC40)
#define SYSTEM_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x185DDF10)

namespace System
{
	inline static constexpr unsigned int String_TypeDefinitionIndex = 327;

	class String : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Empty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(String_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 TrimHead = 0x0; // 0x0
		// static const ::System::Int32 TrimTail = 0x1; // 0x0
		// static const ::System::Int32 TrimBoth = 0x2; // 0x0
		// static const ::System::Int32 charPtrAlignConst = 0x1; // 0x0
		// static const ::System::Int32 alignConst = 0x3; // 0x0
		::System::Int32 m_stringLength; // 0x10
		::System::Char m_firstChar; // 0x14

		::System::Void _ctor(::System::Char* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::SByte* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::SByte* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::SByte* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Text::Encoding* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte*, ::System::Int32, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_6_OFFSET))(this, a1);
		}

		::System::Void _ctor_7(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_7_OFFSET))(this, a1, a2);
		}

		static ::System::String* Join(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_OFFSET))(a1, a2);
		}

		static ::System::String* Join_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_1_OFFSET))(a1, a2);
		}

		static ::System::String* Join_2(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_2_OFFSET))(a1, a2);
		}

		::System::Char get_FirstChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_FIRSTCHAR_OFFSET))(this);
		}

		static ::System::String* Join_3(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CompareOrdinalIgnoreCaseHelper(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALIGNORECASEHELPER_OFFSET))(a1, a2);
		}

		static ::System::String* SmallCharToUpper(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SMALLCHARTOUPPER_OFFSET))(a1);
		}

		static ::System::Boolean EqualsHelper(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALSHELPER_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareOrdinalHelper(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALHELPER_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_2_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Equals_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Equals_4(::System::String* a1, ::System::String* a2, ::System::StringComparison a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean op_Equality(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Char get_Chars(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_CHARS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COPYTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Char>* ToCharArray()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOCHARARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* ToCharArray_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOCHARARRAY_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsNullOrEmpty(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNULLOREMPTY_OFFSET))(a1);
		}

		static ::System::Boolean IsNullOrWhiteSpace(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNULLORWHITESPACE_OFFSET))(a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetLegacyNonRandomizedHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETLEGACYNONRANDOMIZEDHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Split(::Il2CppArray<::System::Char>* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* Split_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* Split_2(::Il2CppArray<::System::Char>* a1, ::System::StringSplitOptions a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_2_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* Split_3(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::StringSplitOptions a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_3_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* SplitInternal(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::StringSplitOptions a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLITINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* Split_4(::Il2CppArray<::System::String*>* a1, ::System::StringSplitOptions a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_4_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* Split_5(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::StringSplitOptions a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_5_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* InternalSplitKeepEmptyEntries(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSPLITKEEPEMPTYENTRIES_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::String*>* InternalSplitOmitEmptyEntries(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSPLITOMITEMPTYENTRIES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 MakeSeparatorList(::Il2CppArray<::System::Char>* a1, ::Il2CppArray<::System::Int32>*& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MAKESEPARATORLIST_OFFSET))(this, a1, a2);
		}

		::System::Int32 MakeSeparatorList_1(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::System::Int32>*& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MAKESEPARATORLIST_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Substring(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SUBSTRING_OFFSET))(this, a1);
		}

		::System::String* Substring_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SUBSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* InternalSubString(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSUBSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* Trim(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIM_OFFSET))(this, a1);
		}

		::System::String* TrimStart(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMSTART_OFFSET))(this, a1);
		}

		::System::String* TrimEnd(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMEND_OFFSET))(this, a1);
		}

		static ::System::String* CreateStringFromEncoding(::System::Byte* a1, ::System::Int32 a2, ::System::Text::Encoding* a3)
		{
			return ((::System::String*(*)(::System::Byte*, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRINGFROMENCODING_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetBytesFromEncoding(::System::Byte* a1, ::System::Int32 a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETBYTESFROMENCODING_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsNormalized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNORMALIZED_OFFSET))(this);
		}

		::System::Boolean IsNormalized_1(::System::Text::NormalizationForm a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNORMALIZED_1_OFFSET))(this, a1);
		}

		::System::String* Normalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NORMALIZE_OFFSET))(this);
		}

		::System::String* Normalize_1(::System::Text::NormalizationForm a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NORMALIZE_1_OFFSET))(this, a1);
		}

		static ::System::String* FastAllocateString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FASTALLOCATESTRING_OFFSET))(a1);
		}

		static ::System::Void FillStringChecked(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FILLSTRINGCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void wstrcpy(::System::Char* a1, ::System::Char* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_WSTRCPY_OFFSET))(a1, a2, a3);
		}

		::System::String* CtorCharArray(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARARRAY_OFFSET))(this, a1);
		}

		::System::String* CtorCharArrayStartLength(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARARRAYSTARTLENGTH_OFFSET))(this, a1, a2, a3);
		}

		::System::String* CtorCharCount(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARCOUNT_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 wcslen(::System::Char* a1)
		{
			return ((::System::Int32(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_WCSLEN_OFFSET))(a1);
		}

		::System::String* CtorCharPtr(::System::Char* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARPTR_OFFSET))(this, a1);
		}

		::System::String* CtorCharPtrStartLength(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARPTRSTARTLENGTH_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 Compare(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Compare_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Compare_2(::System::String* a1, ::System::String* a2, ::System::StringComparison a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Compare_3(::System::String* a1, ::System::String* a2, ::System::Globalization::CultureInfo* a3, ::System::Globalization::CompareOptions a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Compare_4(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Globalization::CultureInfo* a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Compare_5(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Compare_6(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_6_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Compare_7(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Globalization::CultureInfo* a7)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_7_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 Compare_8(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Globalization::CultureInfo* a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 Compare_9(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::StringComparison a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_9_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Int32 CompareOrdinal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareOrdinal_1(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINAL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean EndsWith(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_OFFSET))(this, a1);
		}

		::System::Boolean EndsWith_1(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndsWith_2(::System::String* a1, ::System::Boolean a2, ::System::Globalization::CultureInfo* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndsWith_3(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_3_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::System::Char a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf_1(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOfAny(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfAny_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf_2(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_2_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOf_5(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_5_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf_6(::System::String* a1, ::System::Int32 a2, ::System::StringComparison a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOf_7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::StringComparison a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 LastIndexOf(::System::Char a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_OFFSET))(this, a1);
		}

		::System::Int32 LastIndexOf_1(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 LastIndexOfAny(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_OFFSET))(this, a1);
		}

		::System::Int32 LastIndexOfAny_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 LastIndexOf_2(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_2_OFFSET))(this, a1);
		}

		::System::Int32 LastIndexOf_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 LastIndexOf_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOf_5(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_5_OFFSET))(this, a1, a2);
		}

		::System::Int32 LastIndexOf_6(::System::String* a1, ::System::Int32 a2, ::System::StringComparison a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOf_7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::StringComparison a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* PadLeft(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADLEFT_OFFSET))(this, a1);
		}

		::System::String* PadLeft_1(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADLEFT_1_OFFSET))(this, a1, a2);
		}

		::System::String* PadRight(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADRIGHT_OFFSET))(this, a1);
		}

		::System::String* PadRight_1(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADRIGHT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartsWith(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_OFFSET))(this, a1);
		}

		::System::Boolean StartsWith_1(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartsWith_2(::System::String* a1, ::System::Boolean a2, ::System::Globalization::CultureInfo* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToLower()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWER_OFFSET))(this);
		}

		::System::String* ToLower_1(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWER_1_OFFSET))(this, a1);
		}

		::System::String* ToLowerInvariant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWERINVARIANT_OFFSET))(this);
		}

		::System::String* ToUpper()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPER_OFFSET))(this);
		}

		::System::String* ToUpper_1(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPER_1_OFFSET))(this, a1);
		}

		::System::String* ToUpperInvariant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPERINVARIANT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CLONE_OFFSET))(this);
		}

		static ::System::Boolean IsBOMWhitespace(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISBOMWHITESPACE_OFFSET))(a1);
		}

		::System::String* Trim_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIM_1_OFFSET))(this);
		}

		::System::String* TrimHelper(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMHELPER_OFFSET))(this, a1);
		}

		::System::String* TrimHelper_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMHELPER_1_OFFSET))(this, a1, a2);
		}

		::System::String* CreateTrimmedString(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATETRIMMEDSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* Insert(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INSERT_OFFSET))(this, a1, a2);
		}

		::System::String* Replace(::System::Char a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACE_OFFSET))(this, a1, a2);
		}

		::System::String* Replace_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACE_1_OFFSET))(this, a1, a2);
		}

		::System::String* Remove(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REMOVE_OFFSET))(this, a1, a2);
		}

		::System::String* Remove_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REMOVE_1_OFFSET))(this, a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* Format_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_2(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Format_3(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_3_OFFSET))(a1, a2);
		}

		static ::System::String* Format_4(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_5(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Format_6(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* Format_7(::System::IFormatProvider* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_7_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatHelper(::System::IFormatProvider* a1, ::System::String* a2, ::System::ParamsArray a3)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::ParamsArray))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMATHELPER_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Copy(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COPY_OFFSET))(a1);
		}

		static ::System::String* Concat(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_OFFSET))(a1);
		}

		static ::System::String* Concat_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_1_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_2(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Concat_3(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Concat_4(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_4_OFFSET))(a1);
		}

		static ::System::String* Concat_5(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_5_OFFSET))(a1);
		}

		static ::System::String* Concat_6(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_6_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_7(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_7_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Concat_8(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_8_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* ConcatArray(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCATARRAY_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_9(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_9_OFFSET))(a1);
		}

		static ::System::String* Intern(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERN_OFFSET))(a1);
		}

		static ::System::String* IsInterned(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISINTERNED_OFFSET))(a1);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}

		::System::CharEnumerator* GetEnumerator()
		{
			return ((::System::CharEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Char>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_CHAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Void InternalCopy(::System::String* a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALCOPY_OFFSET))(a1, a2, a3);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_LENGTH_OFFSET))(this);
		}

		static ::System::Int32 CompareOrdinalUnchecked(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALUNCHECKED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 IndexOf_8(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOfUnchecked(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFUNCHECKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOfUnchecked_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFUNCHECKED_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOfAny_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOfAnyUnchecked(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANYUNCHECKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOf_8(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOfUnchecked(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFUNCHECKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOfAny_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LastIndexOfAnyUnchecked(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANYUNCHECKED_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 nativeCompareOrdinalEx(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NATIVECOMPAREORDINALEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* ReplaceInternal(::System::Char a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::String* ReplaceInternal_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEINTERNAL_1_OFFSET))(this, a1, a2);
		}

		::System::String* ReplaceUnchecked(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEUNCHECKED_OFFSET))(this, a1, a2);
		}

		::System::String* ReplaceFallback(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEFALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::String* PadHelper(::System::Int32 a1, ::System::Char a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADHELPER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean StartsWithOrdinalUnchecked(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITHORDINALUNCHECKED_OFFSET))(this, a1);
		}

		::System::Boolean IsAscii()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISASCII_OFFSET))(this);
		}

		::System::Boolean IsFastSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISFASTSORT_OFFSET))(this);
		}

		static ::System::String* InternalIsInterned(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALISINTERNED_OFFSET))(a1);
		}

		static ::System::String* InternalIntern(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALINTERN_OFFSET))(a1);
		}

		static ::System::Void CharCopy(::System::Char* a1, ::System::Char* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CHARCOPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memset(::System::Byte* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMSET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void bzero(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_OFFSET))(a1, a2);
		}

		static ::System::Void bzero_aligned_1(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_1_OFFSET))(a1, a2);
		}

		static ::System::Void bzero_aligned_2(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_2_OFFSET))(a1, a2);
		}

		static ::System::Void bzero_aligned_4(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_4_OFFSET))(a1, a2);
		}

		static ::System::Void bzero_aligned_8(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_8_OFFSET))(a1, a2);
		}

		static ::System::Void memcpy_aligned_1(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy_aligned_2(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy_aligned_4(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy_aligned_8(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_8_OFFSET))(a1, a2, a3);
		}

		::System::String* CreateString(::System::SByte* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::SByte*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_OFFSET))(this, a1);
		}

		::System::String* CreateString_1(::System::SByte* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::SByte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* CreateString_2(::System::Char* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_2_OFFSET))(this, a1);
		}

		::System::String* CreateString_3(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_3_OFFSET))(this, a1, a2, a3);
		}

		::System::String* CreateString_4(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_4_OFFSET))(this, a1, a2, a3);
		}

		::System::String* CreateString_5(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_5_OFFSET))(this, a1);
		}

		::System::String* CreateString_6(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_6_OFFSET))(this, a1, a2);
		}

		::System::String* CreateString_7(::System::SByte* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Text::Encoding* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::SByte*, ::System::Int32, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_7_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
