#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System::Collections { class IList; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Contexts { class Context; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x18B9D030)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x18B9D020)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B9D010)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9D000)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int RemoteActivationAttribute_TypeDefinitionIndex = 1317;

	class RemoteActivationAttribute : public ::System::Attribute
	{
	public:
		::System::Collections::IList* _contextProperties; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::IList* contextProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE__CTOR_1_OFFSET))(this, contextProperties);
		}

		::System::Boolean IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_ISCONTEXTOK_OFFSET))(this, ctx, ctor);
		}

		::System::Void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET))(this, ctor);
		}
	};
}
