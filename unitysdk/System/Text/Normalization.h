#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/NormalizationCheck.h"
#include "unitysdk/System/Text/NormalizationForm.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET UNITYSDK_OFFSET(0x1BC19980)
#define SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET UNITYSDK_OFFSET(0x1BC1A810)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x1BC1A170)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET UNITYSDK_OFFSET(0x1BC19FE0)
#define SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET UNITYSDK_OFFSET(0x1BC19D70)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET UNITYSDK_OFFSET(0x1BC1BEF0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BC19E50)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1BC1BE60)
#define SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET UNITYSDK_OFFSET(0x1BC1B830)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET UNITYSDK_OFFSET(0x1BC1D270)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET UNITYSDK_OFFSET(0x1BC1CF30)
#define SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET UNITYSDK_OFFSET(0x1BC19A10)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1BC19B30)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET UNITYSDK_OFFSET(0x1BC19C50)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1BC1D3F0)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1BC1D360)
#define SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET UNITYSDK_OFFSET(0x1BC1DB30)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1BC1D860)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BC1D980)
#define SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x1BC198F0)
#define SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET UNITYSDK_OFFSET(0x1BC1A3A0)
#define SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET UNITYSDK_OFFSET(0x1BC1C730)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET UNITYSDK_OFFSET(0x1BC1ABF0)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1BC1BAD0)
#define SYSTEM_TEXT_NORMALIZATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC1DB80)

namespace System::Text
{
	inline static constexpr unsigned int Normalization_TypeDefinitionIndex = 513;

	class Normalization : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x11640);
		}
		static ::System::Byte** StaticGet_props()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::Int16** StaticGet_charMapIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7848);
		}
		static ::System::Byte** StaticGet_combiningClass()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7858);
		}
		static ::System::UInt16** StaticGet_mapIdxToComposite()
		{
			return (::System::UInt16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::System::Int16** StaticGet_helperIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::Int32** StaticGet_mappedChars()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x7870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION__CCTOR_OFFSET))();
		}

		static ::System::UInt32 PropValue(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET))(a1);
		}

		static ::System::Int32 CharMapIdx(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET))(a1);
		}

		static ::System::Byte GetCombiningClass(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET))(a1);
		}

		static ::System::Int32 GetPrimaryCompositeFromMapIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET))(a1);
		}

		static ::System::Int32 GetPrimaryCompositeHelperIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET))(a1);
		}

		static ::System::String* Compose(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET))(a1, a2);
		}

		static ::System::Text::StringBuilder* Combine(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Text::StringBuilder*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Combine_1(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CombineHangul(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Fetch(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 TryComposeWithPreviousStarter(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 TryCompose(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Decompose(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET))(a1, a2);
		}

		static ::System::Void Decompose_1(::System::String* a1, ::System::Text::StringBuilder*& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReorderCanonical(::System::String* a1, ::System::Text::StringBuilder*& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DecomposeChar(::System::Text::StringBuilder*& a1, ::Il2CppArray<::System::Int32>*& a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32& a6)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*&, ::Il2CppArray<::System::Int32>*&, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Text::NormalizationCheck QuickCheck(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Text::NormalizationCheck(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCanonicalHangul(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetCanonical(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsNormalized(::System::String* a1, ::System::Text::NormalizationForm a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNormalized_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_1_OFFSET))(a1, a2);
		}

		static ::System::String* Normalize(::System::String* a1, ::System::Text::NormalizationForm a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET))(a1, a2);
		}

		static ::System::String* Normalize_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_1_OFFSET))(a1, a2);
		}

		static ::System::Void load_normalization_resource(::System::IntPtr& a1, ::System::IntPtr& a2, ::System::IntPtr& a3, ::System::IntPtr& a4, ::System::IntPtr& a5, ::System::IntPtr& a6)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
