#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }

#define SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1DB84890)
#define SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB848B0)
#define SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB84810)

namespace System::Net
{
	inline static constexpr unsigned int DownloadDataCompletedEventArgs_TypeDefinitionIndex = 3464;

	class DownloadDataCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::Il2CppArray<::System::Byte>* m_Result; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* result, ::System::Exception* exception, ::System::Boolean cancelled, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, exception, cancelled, userToken);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Result()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADDATACOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}
	};
}
