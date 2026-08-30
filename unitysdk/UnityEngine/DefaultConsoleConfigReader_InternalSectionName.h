#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1DED3C30)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED6600)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 4063;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2B0);
		}
		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2B8);
		}
		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2C0);
		}
		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2C8);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2D0);
		}
		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2D8);
		}
		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2E8);
		}
		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0xF2F0);
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
