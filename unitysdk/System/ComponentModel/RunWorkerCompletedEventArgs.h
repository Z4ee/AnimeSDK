#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1BEC06F0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x1BEC0710)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC0670)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunWorkerCompletedEventArgs_TypeDefinitionIndex = 2977;

	class RunWorkerCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::System::Object* result; // 0x28

		::System::Void _ctor(::System::Object* result, ::System::Exception* error, ::System::Boolean cancelled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, error, cancelled);
		}

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}

		::System::Object* get_UserState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET))(this);
		}
	};
}
