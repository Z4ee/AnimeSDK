#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UniLabs/Time/TimeUnit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FBB9E60)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FBB9EF0)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FBB9B40)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB9B20)

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeUnitExtensions_GetUnitValueDelegate_TypeDefinitionIndex = 95333;

	class TimeUnitExtensions_GetUnitValueDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Double Invoke(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::Double(*)(::PVOID, ::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_INVOKE_OFFSET))(this, timeSpan, timeUnit);
		}

		::System::IAsyncResult* BeginInvoke(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_BEGININVOKE_OFFSET))(this, timeSpan, timeUnit, callback, object);
		}

		::System::Double EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Double(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
