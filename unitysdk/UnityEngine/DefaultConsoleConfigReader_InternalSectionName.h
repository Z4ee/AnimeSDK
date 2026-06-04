#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1B28E880)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B291190)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 4050;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2EC90);
		}
		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2EC98);
		}
		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECA0);
		}
		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECA8);
		}
		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECB0);
		}
		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECB8);
		}
		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECC0);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x2ECD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsBuildIn(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET))(a1);
		}
	};
}
