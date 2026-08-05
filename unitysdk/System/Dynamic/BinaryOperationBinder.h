#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObjectBinder.h"

namespace System::Dynamic { class DynamicMetaObject; }

#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1FAE8470)
#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1FAE8450)

namespace System::Dynamic
{
	inline static constexpr unsigned int BinaryOperationBinder_TypeDefinitionIndex = 4965;

	class BinaryOperationBinder : public ::System::Dynamic::DynamicMetaObjectBinder
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackBinaryOperation(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET))(this, target, arg);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_BIND_OFFSET))(this, target, args);
		}
	};
}
