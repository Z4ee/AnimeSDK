#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_MHYSECURITY_DECRYPTBUFFER_OFFSET UNITYSDK_OFFSET(0x1C560D30)

namespace UnityEngine
{
	inline static constexpr unsigned int MhySecurity_TypeDefinitionIndex = 37668;

	class MhySecurity : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* DecryptBuffer(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MHYSECURITY_DECRYPTBUFFER_OFFSET))(data);
		}
	};
}
