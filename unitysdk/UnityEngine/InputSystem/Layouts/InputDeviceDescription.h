#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_COMPAREPROPERTYTODEVICEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD276A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9B86C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B8680)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1CD275F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B8740)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x3E3D10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x9B85F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_INTERFACENAME_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_MANUFACTURER_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_SERIAL_OFFSET UNITYSDK_OFFSET(0x40C750)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x412A20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD274F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD27530)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x775AF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_INTERFACENAME_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_MANUFACTURER_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x7353A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_SERIAL_OFFSET UNITYSDK_OFFSET(0x6B3130)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x775AD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOJSON_OFFSET UNITYSDK_OFFSET(0x9B8750)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B8670)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceDescription_TypeDefinitionIndex = 31999;

	struct alignas(8) InputDeviceDescription
	{
		::System::String* m_InterfaceName; // 0x10
		::System::String* m_DeviceClass; // 0x18
		::System::String* m_Manufacturer; // 0x20
		::System::String* m_Product; // 0x28
		::System::String* m_Serial; // 0x30
		::System::String* m_Version; // 0x38
		::System::String* m_Capabilities; // 0x40

		::System::String* get_interfaceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_INTERFACENAME_OFFSET))(this);
		}

		::System::Void set_interfaceName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_INTERFACENAME_OFFSET))(this, value);
		}

		::System::String* get_deviceClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_DEVICECLASS_OFFSET))(this);
		}

		::System::Void set_deviceClass(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_DEVICECLASS_OFFSET))(this, value);
		}

		::System::String* get_manufacturer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_MANUFACTURER_OFFSET))(this);
		}

		::System::Void set_manufacturer(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_MANUFACTURER_OFFSET))(this, value);
		}

		::System::String* get_product()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_PRODUCT_OFFSET))(this);
		}

		::System::Void set_product(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_PRODUCT_OFFSET))(this, value);
		}

		::System::String* get_serial()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_SERIAL_OFFSET))(this);
		}

		::System::Void set_serial(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_SERIAL_OFFSET))(this, value);
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* get_capabilities()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_CAPABILITIES_OFFSET))(this);
		}

		::System::Void set_capabilities(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_SET_CAPABILITIES_OFFSET))(this, value);
		}

		::System::Boolean get_empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GET_EMPTY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_TOJSON_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::System::String* json)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceDescription(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_FROMJSON_OFFSET))(json);
		}

		static ::System::Boolean ComparePropertyToDeviceDescriptor(::System::String* propertyName, ::System::String* propertyValue, ::System::String* deviceDescriptor)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEDESCRIPTION_COMPAREPROPERTYTODEVICEDESCRIPTOR_OFFSET))(propertyName, propertyValue, deviceDescriptor);
		}
	};
}
