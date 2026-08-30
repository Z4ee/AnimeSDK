#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_SET_DOESNOTCONTRIBUTETOSIZE_OFFSET UNITYSDK_OFFSET(0x1EDD3A80)
#define UNITYENGINE_BINDINGS_IGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD3A90)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int IgnoreAttribute_TypeDefinitionIndex = 3736;

	class IgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _DoesNotContributeToSize_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_IGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_DoesNotContributeToSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_SET_DOESNOTCONTRIBUTETOSIZE_OFFSET))(this, a1);
		}
	};
}
