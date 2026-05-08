#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1BDA4BD0)
#define SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BDA4BB0)

namespace System::Dynamic
{
	inline static constexpr unsigned int CreateInstanceBinder_TypeDefinitionIndex = 4975;

	class CreateInstanceBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackCreateInstance(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
