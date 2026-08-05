#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/ObjectPropertyBase_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ObjectPropertyParams; }

#define UNREALTYPES_OBJECTPROPERTY_GETOBJECTHANDLEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E38FEF0)
#define UNREALTYPES_OBJECTPROPERTY_SETOBJECTHANDLEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E38FF40)
#define UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382D20)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectProperty_TypeDefinitionIndex = 28381;

	class ObjectProperty : public ::UnrealTypes::ObjectPropertyBase_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ObjectPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ObjectPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> GetObjectHandlePropertyValue(::System::Void* propertyValueAddress)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_GETOBJECTHANDLEPROPERTYVALUE_OFFSET))(this, propertyValueAddress);
		}

		::System::Void SetObjectHandlePropertyValue(::System::Void* propertyValueAddress, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_SETOBJECTHANDLEPROPERTYVALUE_OFFSET))(this, propertyValueAddress, value);
		}
	};
}
