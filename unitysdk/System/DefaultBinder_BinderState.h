#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DEFAULTBINDER_BINDERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC2F80)

namespace System
{
	inline static constexpr unsigned int DefaultBinder_BinderState_TypeDefinitionIndex = 217;

	class DefaultBinder_BinderState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_argsMap; // 0x10
		::System::Int32 m_originalSize; // 0x18
		::System::Boolean m_isParamArray; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Int32>* argsMap, ::System::Int32 originalSize, ::System::Boolean isParamArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDERSTATE__CTOR_OFFSET))(this, argsMap, originalSize, isParamArray);
		}
	};
}
