#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZXing::Aztec::Internal { class State; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x18CFAD10)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_SIMPLIFYSTATES_OFFSET UNITYSDK_OFFSET(0x18CFF290)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORCHAR_OFFSET UNITYSDK_OFFSET(0x18CFE6D0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORPAIR_OFFSET UNITYSDK_OFFSET(0x18D00750)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORCHAR_OFFSET UNITYSDK_OFFSET(0x18CFE1B0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORPAIR_OFFSET UNITYSDK_OFFSET(0x18CFDE50)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CFC8A0)
#define ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFAD00)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int HighLevelEncoder_TypeDefinitionIndex = 6113;

	class HighLevelEncoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_LATCH_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x84C0);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_SHIFT_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x84C8);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CHAR_MAP()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x84D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MODE_NAMES()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x84D8);
		}
		::Il2CppArray<::System::Byte>* text; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::System::Byte>* text)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER__CTOR_OFFSET))(this, text);
		}

		::ZXing::Common::BitArray* encode()
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_ENCODE_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* updateStateListForChar(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* states, ::System::Int32 index)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORCHAR_OFFSET))(this, states, index);
		}

		::System::Void updateStateForChar(::ZXing::Aztec::Internal::State* state, ::System::Int32 index, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::State*, ::System::Int32, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORCHAR_OFFSET))(this, state, index, result);
		}

		static ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* updateStateListForPair(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* states, ::System::Int32 index, ::System::Int32 pairCode)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATELISTFORPAIR_OFFSET))(states, index, pairCode);
		}

		static ::System::Void updateStateForPair(::ZXing::Aztec::Internal::State* state, ::System::Int32 index, ::System::Int32 pairCode, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* result)
		{
			return ((::System::Void(*)(::ZXing::Aztec::Internal::State*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_UPDATESTATEFORPAIR_OFFSET))(state, index, pairCode, result);
		}

		static ::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>* simplifyStates(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>* states)
		{
			return ((::System::Collections::Generic::ICollection_1<::ZXing::Aztec::Internal::State*>*(*)(::System::Collections::Generic::IEnumerable_1<::ZXing::Aztec::Internal::State*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_HIGHLEVELENCODER_SIMPLIFYSTATES_OFFSET))(states);
		}
	};
}
