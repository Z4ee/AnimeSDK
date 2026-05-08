#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class IComNativeDescriptorHandler; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19EE8730)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x19EE8710)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x19EE8720)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8700)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_ComNativeDescriptionProvider_TypeDefinitionIndex = 2998;

	class TypeDescriptor_ComNativeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::System::ComponentModel::IComNativeDescriptorHandler* _handler; // 0x20

		::System::Void _ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComNativeDescriptorHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER__CTOR_OFFSET))(this, handler);
		}

		::System::ComponentModel::IComNativeDescriptorHandler* get_Handler()
		{
			return ((::System::ComponentModel::IComNativeDescriptorHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_GET_HANDLER_OFFSET))(this);
		}

		::System::Void set_Handler(::System::ComponentModel::IComNativeDescriptorHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComNativeDescriptorHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_SET_HANDLER_OFFSET))(this, value);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_COMNATIVEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}
	};
}
