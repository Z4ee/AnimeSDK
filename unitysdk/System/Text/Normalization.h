#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/NormalizationCheck.h"
#include "unitysdk/System/Text/NormalizationForm.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET UNITYSDK_OFFSET(0x185FDFC0)
#define SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET UNITYSDK_OFFSET(0x185FEE50)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x185FE7B0)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET UNITYSDK_OFFSET(0x185FE620)
#define SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET UNITYSDK_OFFSET(0x185FE3B0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET UNITYSDK_OFFSET(0x186004F0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_1_OFFSET UNITYSDK_OFFSET(0x185FE490)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x18600460)
#define SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET UNITYSDK_OFFSET(0x185FFE70)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET UNITYSDK_OFFSET(0x18601870)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET UNITYSDK_OFFSET(0x18601530)
#define SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET UNITYSDK_OFFSET(0x185FE050)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET UNITYSDK_OFFSET(0x185FE170)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET UNITYSDK_OFFSET(0x185FE290)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x186019F0)
#define SYSTEM_TEXT_NORMALIZATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x18601960)
#define SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET UNITYSDK_OFFSET(0x18602130)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x18601E60)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x18601F80)
#define SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x185FDF30)
#define SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET UNITYSDK_OFFSET(0x185FE9E0)
#define SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET UNITYSDK_OFFSET(0x18600D30)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET UNITYSDK_OFFSET(0x185FF230)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET UNITYSDK_OFFSET(0x186000D0)
#define SYSTEM_TEXT_NORMALIZATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18602180)

namespace System::Text
{
	inline static constexpr unsigned int Normalization_TypeDefinitionIndex = 510;

	class Normalization : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::System::UInt16** StaticGet_mapIdxToComposite()
		{
			return (::System::UInt16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x5280);
		}
		static ::System::Byte** StaticGet_combiningClass()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x5288);
		}
		static ::System::Int16** StaticGet_helperIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x5290);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x5298);
		}
		static ::System::Byte** StaticGet_props()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x52A0);
		}
		static ::System::Int32** StaticGet_mappedChars()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x52A8);
		}
		static ::System::Int16** StaticGet_charMapIndex()
		{
			return (::System::Int16**)Il2CppClass::FromTypeDefinitionIndex(Normalization_TypeDefinitionIndex)->GetStaticField(0x52B0);
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
