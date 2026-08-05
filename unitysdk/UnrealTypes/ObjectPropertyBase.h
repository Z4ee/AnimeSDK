#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Property.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_OBJECTPROPERTYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FFA0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectPropertyBase_TypeDefinitionIndex = 28379;

	class ObjectPropertyBase : public ::UnrealTypes::Property
	{
	public:
		::UnrealTypes::Class* PropertyClass; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::PropertyParamsBase* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::PropertyParamsBase*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTYBASE__CTOR_OFFSET))(this, owner, prop);
		}
	};
}
