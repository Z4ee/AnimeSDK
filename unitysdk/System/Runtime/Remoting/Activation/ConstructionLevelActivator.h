#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Activation { class IConstructionReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1BDC1E00)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1BDC1DF0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBF770)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ConstructionLevelActivator_TypeDefinitionIndex = 1279;

	class ConstructionLevelActivator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR__CTOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_ACTIVATE_OFFSET))(this, a1);
		}
	};
}
