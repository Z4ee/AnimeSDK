#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1A43D080)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A43FD70)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 3876;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AA0);
		}
		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AA8);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AB0);
		}
		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AB8);
		}
		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AC0);
		}
		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AD0);
		}
		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AD8);
		}
		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex)->GetStaticField(0x14AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsBuildIn(::System::String* sectionName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET))(sectionName);
		}
	};
}
