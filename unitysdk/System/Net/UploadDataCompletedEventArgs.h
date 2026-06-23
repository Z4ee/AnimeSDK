#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }

#define SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1C1D3920)
#define SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1D3940)
#define SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D38A0)

namespace System::Net
{
	inline static constexpr unsigned int UploadDataCompletedEventArgs_TypeDefinitionIndex = 3468;

	class UploadDataCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::Il2CppArray<::System::Byte>* m_Result; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* result, ::System::Exception* exception, ::System::Boolean cancelled, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, exception, cancelled, userToken);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Result()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADDATACOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}
	};
}
