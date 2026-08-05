#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/RuntimeModule.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1C6D7F20)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C6D7ED0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_28D136AD867A9023_OFFSET UNITYSDK_OFFSET(0x1C6D7F70)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1C6D7F40)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6A56EDCDE2C256CF_OFFSET UNITYSDK_OFFSET(0x1C6D7F60)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6C5DB94BC17DC310_OFFSET UNITYSDK_OFFSET(0x1C6D7F50)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C4956DB9C5EDE438_OFFSET UNITYSDK_OFFSET(0x1C6D7EC0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_E59ABA66309540E4_OFFSET UNITYSDK_OFFSET(0x1C6D8050)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C6D7F30)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F4779E52B1AE4857_OFFSET UNITYSDK_OFFSET(0x1C6D7EE0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1C6D80C0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoModule_TypeDefinitionIndex = 597;

	class MonoModule : public ::System::Reflection::RuntimeModule
	{
	public:
		::System::Void Method_3_F8C7231308CD2C82()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F8C7231308CD2C82_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_3_C4956DB9C5EDE438()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C4956DB9C5EDE438_OFFSET))(this);
		}

		::System::String* Method_3_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_OFFSET))(this);
		}

		::System::Guid Method_3_F4779E52B1AE4857()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F4779E52B1AE4857_OFFSET))(this);
		}

		::System::String* Method_3_126AB3935214AA22_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_1_OFFSET))(this);
		}

		::System::Boolean Method_3_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_3_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_3_6C5DB94BC17DC310(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6C5DB94BC17DC310_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_3_6A56EDCDE2C256CF(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6A56EDCDE2C256CF_OFFSET))(this, attributeType, inherit);
		}

		::System::Void Method_3_28D136AD867A9023(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_28D136AD867A9023_OFFSET))(this, info, context);
		}

		::System::Reflection::RuntimeAssembly* Method_3_E59ABA66309540E4()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_E59ABA66309540E4_OFFSET))(this);
		}
	};
}
