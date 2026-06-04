#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_MSIWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1B55C850)
#define ZXING_ONED_MSIWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B55C7A0)
#define ZXING_ONED_MSIWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B55CFA0)
#define ZXING_ONED_MSIWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54FCE0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIWriter_TypeDefinitionIndex = 6453;

	class MSIWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_startWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x3D40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_endWidths()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x3D48);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_numberWidths()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MSIWriter_TypeDefinitionIndex)->GetStaticField(0x3D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER__CCTOR_OFFSET))();
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIWRITER_ENCODE_1_OFFSET))(this, a1);
		}
	};
}
