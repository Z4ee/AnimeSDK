#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

class UIControllerExtensionData;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19F5D550)
#define UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19F5D560)
#define UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19F5D960)
#define UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F5DC00)
#define UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5DBC0)

inline static constexpr unsigned int UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex = 46997;

class UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UIControllerExtensionData*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_CachedSerializer4()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EC0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EC8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40ED0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_CachedSerializer3()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40ED8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_UIControllerExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EE0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::UIControllerExtensionData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::UIControllerExtensionData*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_UICONTROLLEREXTENSIONDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
