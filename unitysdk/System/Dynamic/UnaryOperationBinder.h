#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1EEECB00)
#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1EEECAE0)

namespace System::Dynamic
{
	inline static constexpr unsigned int UnaryOperationBinder_TypeDefinitionIndex = 5009;

	class UnaryOperationBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* target)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET))(this, target);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
