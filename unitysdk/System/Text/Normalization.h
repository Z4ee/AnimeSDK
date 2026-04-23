#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/NormalizationCheck.h"
#include "unitysdk/System/Text/NormalizationForm.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET UNITYSDK_OFFSET(0x17844220)
#define SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET UNITYSDK_OFFSET(0x178450E0)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x17844A10)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET UNITYSDK_OFFSET(0x17844880)
#define SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET UNITYSDK_OFFSET(0x17844610)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET UNITYSDK_OFFSET(0x17846780)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_1_OFFSET UNITYSDK_OFFSET(0x178446F0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x178466F0)
#define SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET UNITYSDK_OFFSET(0x17846100)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET UNITYSDK_OFFSET(0x17847690)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET UNITYSDK_OFFSET(0x17847320)
#define SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET UNITYSDK_OFFSET(0x178442B0)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET UNITYSDK_OFFSET(0x178443D0)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET UNITYSDK_OFFSET(0x178444F0)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x17847850)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x178477C0)
#define SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET UNITYSDK_OFFSET(0x17847F90)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x17847CC0)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x17847DE0)
#define SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x17844190)
#define SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET UNITYSDK_OFFSET(0x17844C40)
#define SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET UNITYSDK_OFFSET(0x17846B20)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET UNITYSDK_OFFSET(0x178454C0)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET UNITYSDK_OFFSET(0x17846360)
#define SYSTEM_TEXT_NORMALIZATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17847FE0)

namespace System::Text
{
	inline static constexpr unsigned int Normalization_TypeDefinitionIndex = 511;

	class Normalization : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0xBA10);
		}
		static ::System::Byte** StaticGet_props()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4540);
		}
		static ::System::Int16** StaticGet_charMapIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4548);
		}
		static ::System::Byte** StaticGet_combiningClass()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4550);
		}
		static ::System::UInt16** StaticGet_mapIdxToComposite()
		{
			return (::System::UInt16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4558);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4560);
		}
		static ::System::Int16** StaticGet_helperIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4568);
		}
		static ::System::Int32** StaticGet_mappedChars()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x4570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION__CCTOR_OFFSET))();
		}

		static ::System::UInt32 PropValue(::System::Int32 cp)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET))(cp);
		}

		static ::System::Int32 CharMapIdx(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET))(cp);
		}

		static ::System::Byte GetCombiningClass(::System::Int32 c)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET))(c);
		}

		static ::System::Int32 GetPrimaryCompositeFromMapIndex(::System::Int32 src)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET))(src);
		}

		static ::System::Int32 GetPrimaryCompositeHelperIndex(::System::Int32 cp)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET))(cp);
		}

		static ::System::String* Compose(::System::String* source, ::System::Int32 checkType)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET))(source, checkType);
		}

		static ::System::Text::StringBuilder* Combine(::System::String* source, ::System::Int32 start, ::System::Int32 checkType)
		{
			return ((::System::Text::StringBuilder*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET))(source, start, checkType);
		}

		static ::System::Void Combine_1(::System::Text::StringBuilder* sb, ::System::Int32 i, ::System::Int32 checkType)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_1_OFFSET))(sb, i, checkType);
		}

		static ::System::Int32 CombineHangul(::System::Text::StringBuilder* sb, ::System::String* s, ::System::Int32 current)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET))(sb, s, current);
		}

		static ::System::Int32 Fetch(::System::Text::StringBuilder* sb, ::System::String* s, ::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET))(sb, s, i);
		}

		static ::System::Int32 TryComposeWithPreviousStarter(::System::Text::StringBuilder* sb, ::System::String* s, ::System::Int32 current)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET))(sb, s, current);
		}

		static ::System::Int32 TryCompose(::System::Int32 i, ::System::Int32 starter, ::System::Int32 candidate)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET))(i, starter, candidate);
		}

		static ::System::String* Decompose(::System::String* source, ::System::Int32 checkType)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET))(source, checkType);
		}

		static ::System::Void Decompose_1(::System::String* source, ::System::Text::StringBuilder*& sb, ::System::Int32 checkType)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_1_OFFSET))(source, sb, checkType);
		}

		static ::System::Void ReorderCanonical(::System::String* src, ::System::Text::StringBuilder*& sb, ::System::Int32 start)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET))(src, sb, start);
		}

		static ::System::Void DecomposeChar(::System::Text::StringBuilder*& sb, ::Il2CppArray<::System::Int32>*& buf, ::System::String* s, ::System::Int32 i, ::System::Int32 checkType, ::System::Int32& start)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*&, ::Il2CppArray<::System::Int32>*&, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET))(sb, buf, s, i, checkType, start);
		}

		static ::System::Text::NormalizationCheck QuickCheck(::System::Char c, ::System::Int32 type)
		{
			return ((::System::Text::NormalizationCheck(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET))(c, type);
		}

		static ::System::Int32 GetCanonicalHangul(::System::Int32 s, ::Il2CppArray<::System::Int32>* buf, ::System::Int32 bufIdx)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET))(s, buf, bufIdx);
		}

		static ::System::Int32 GetCanonical(::System::Int32 c, ::Il2CppArray<::System::Int32>* buf, ::System::Int32 bufIdx, ::System::Int32 checkType)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET))(c, buf, bufIdx, checkType);
		}

		static ::System::Boolean IsNormalized(::System::String* source, ::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_OFFSET))(source, normalizationForm);
		}

		static ::System::Boolean IsNormalized_1(::System::String* source, ::System::Int32 type)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_1_OFFSET))(source, type);
		}

		static ::System::String* Normalize(::System::String* source, ::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET))(source, normalizationForm);
		}

		static ::System::String* Normalize_1(::System::String* source, ::System::Int32 type)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_1_OFFSET))(source, type);
		}

		static ::System::Void load_normalization_resource(::System::IntPtr& props, ::System::IntPtr& mappedChars, ::System::IntPtr& charMapIndex, ::System::IntPtr& helperIndex, ::System::IntPtr& mapIdxToComposite, ::System::IntPtr& combiningClass)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET))(props, mappedChars, charMapIndex, helperIndex, mapIdxToComposite, combiningClass);
		}
	};
}
