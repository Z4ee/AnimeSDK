#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_GETINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1E322AF0)
#define SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET UNITYSDK_OFFSET(0x1E322BC0)

namespace System::Dynamic
{
	inline static constexpr unsigned int GetIndexBinder_TypeDefinitionIndex = 5002;

	class GetIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETINDEXBINDER_BIND_OFFSET))(this, target, args);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET))(this, target, indexes);
		}
	};
}
