#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::IO { class Stream; }

#define SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1DAC90F0)
#define SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAC9110)
#define SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9070)

namespace System::Net
{
	inline static constexpr unsigned int OpenReadCompletedEventArgs_TypeDefinitionIndex = 3458;

	class OpenReadCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::System::IO::Stream* m_Result; // 0x28

		::System::Void _ctor(::System::IO::Stream* result, ::System::Exception* exception, ::System::Boolean cancelled, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, exception, cancelled, userToken);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::IO::Stream* get_Result()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}
	};
}
