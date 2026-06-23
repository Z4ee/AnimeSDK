#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CancelEventArgs.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x1B746080)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1B746090)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1B7460A0)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73E4D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoWorkEventArgs_TypeDefinitionIndex = 2870;

	class DoWorkEventArgs : public ::System::ComponentModel::CancelEventArgs
	{
	public:
		::System::Object* result; // 0x18
		::System::Object* argument; // 0x20

		::System::Void _ctor(::System::Object* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS__CTOR_OFFSET))(this, argument);
		}

		::System::Object* get_Argument()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_ARGUMENT_OFFSET))(this);
		}

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_SET_RESULT_OFFSET))(this, value);
		}
	};
}
