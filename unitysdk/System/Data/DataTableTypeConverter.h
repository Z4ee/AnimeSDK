#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ReferenceConverter.h"

namespace System::ComponentModel { class ITypeDescriptorContext; }

#define SYSTEM_DATA_DATATABLETYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EABAD20)
#define SYSTEM_DATA_DATATABLETYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABACB0)

namespace System::Data
{
	inline static constexpr unsigned int DataTableTypeConverter_TypeDefinitionIndex = 39276;

	class DataTableTypeConverter : public ::System::ComponentModel::ReferenceConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLETYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLETYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}
	};
}
