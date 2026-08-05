#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ZXING_ONED_EANMANUFACTURERORGSUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8F080)

namespace ZXing::OneD
{
	inline static constexpr unsigned int EANManufacturerOrgSupport_TypeDefinitionIndex = 19521;

	class EANManufacturerOrgSupport : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* countryIdentifiers; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* ranges; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_EANMANUFACTURERORGSUPPORT__CTOR_OFFSET))(this);
		}
	};
}
