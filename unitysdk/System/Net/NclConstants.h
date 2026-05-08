#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }

#define SYSTEM_NET_NCLCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A256860)

namespace System::Net
{
	inline static constexpr unsigned int NclConstants_TypeDefinitionIndex = 3295;

	class NclConstants : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Uri*>** StaticGet_EmptyUriArray()
		{
			return (::Il2CppArray<::System::Uri*>**)Il2CppClass::FromTypeDefinitionIndex(NclConstants_TypeDefinitionIndex)->GetStaticField(0x3520);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_CRLF()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NclConstants_TypeDefinitionIndex)->GetStaticField(0x3528);
		}
		static ::System::Object** StaticGet_Sentinel()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NclConstants_TypeDefinitionIndex)->GetStaticField(0x3530);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_EmptyObjectArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NclConstants_TypeDefinitionIndex)->GetStaticField(0x3538);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_ChunkTerminator()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(NclConstants_TypeDefinitionIndex)->GetStaticField(0x3540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
