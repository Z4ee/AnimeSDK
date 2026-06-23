#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::IO { class Stream; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C48BA80)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C48BA60)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48BAA0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int SerializationStore_TypeDefinitionIndex = 3116;

	class SerializationStore : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE__CTOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_SERIALIZATIONSTORE_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
