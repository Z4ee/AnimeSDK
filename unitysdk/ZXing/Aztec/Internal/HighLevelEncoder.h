#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZXing::Aztec::Internal { class State; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B536E20)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_SIMPLIFYSTATES_OFFSET UNITYSDK_OFFSET(0x1B53AD10)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORCHAR_OFFSET UNITYSDK_OFFSET(0x1B53A1D0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORPAIR_OFFSET UNITYSDK_OFFSET(0x1B53BEE0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORCHAR_OFFSET UNITYSDK_OFFSET(0x1B539CD0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORPAIR_OFFSET UNITYSDK_OFFSET(0x1B539960)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B538780)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B536E10)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int HighLevelEncoder_TypeDefinitionIndex = 6498;

	class HighLevelEncoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MODE_NAMES()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x3140);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CHAR_MAP()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x3148);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_SHIFT_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x3150);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_LATCH_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x3158);
		}
		::Il2CppArray<::System::Byte>* text; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CTOR_OFFSET))(this, a1);
		}

		::ZXing::Common::BitArray* encode()
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_ENCODE_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* updateStateListForChar(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORCHAR_OFFSET))(this, a1, a2);
		}

		::System::Void updateStateForChar(::ZXing::Aztec::Internal::State* a1, ::System::Int32 a2, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::State*, ::System::Int32, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORCHAR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* updateStateListForPair(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORPAIR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void updateStateForPair(::ZXing::Aztec::Internal::State* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* a4)
		{
			return ((::System::Void(*)(::ZXing::Aztec::Internal::State*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORPAIR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* simplifyStates(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* a1)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_SIMPLIFYSTATES_OFFSET))(a1);
		}
	};
}
