#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::ComponentModel::Design { class DesigntimeLicenseContext; }
namespace System::ComponentModel::Design { class RuntimeLicenseContext; }
namespace System::IO { class Stream; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6C3E40)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6C3C90)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C3C80)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesigntimeLicenseContextSerializer_TypeDefinitionIndex = 3054;

	class DesigntimeLicenseContextSerializer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Void Serialize(::System::IO::Stream* o, ::System::String* cryptoKey, ::System::ComponentModel::Design::DesigntimeLicenseContext* context)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::ComponentModel::Design::DesigntimeLicenseContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_SERIALIZE_OFFSET))(o, cryptoKey, context);
		}

		static ::System::Void Deserialize(::System::IO::Stream* o, ::System::String* cryptoKey, ::System::ComponentModel::Design::RuntimeLicenseContext* context)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::ComponentModel::Design::RuntimeLicenseContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNTIMELICENSECONTEXTSERIALIZER_DESERIALIZE_OFFSET))(o, cryptoKey, context);
		}
	};
}
