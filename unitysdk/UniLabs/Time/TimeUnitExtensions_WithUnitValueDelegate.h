#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UniLabs/Time/TimeUnit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FBBA290)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FBBA340)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FBB9F40)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB9F20)

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeUnitExtensions_WithUnitValueDelegate_TypeDefinitionIndex = 95332;

	class TimeUnitExtensions_WithUnitValueDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::TimeSpan Invoke(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_INVOKE_OFFSET))(this, timeSpan, timeUnit, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_BEGININVOKE_OFFSET))(this, timeSpan, timeUnit, value, callback, object);
		}

		::System::TimeSpan EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
