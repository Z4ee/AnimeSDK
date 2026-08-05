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

#define UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1432C0)
#define UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C1432D0)
#define UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_WRITE_OFFSET UNITYSDK_OFFSET(0x1C143680)
#define UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1438F0)
#define UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1438B0)

inline static constexpr unsigned int UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex = 90267;

class UIControllerExtensionData_Class_3_77020D86207BDBF9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UIControllerExtensionData*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_Field_3_6()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex)->GetStaticField(0x412C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_Field_3_1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex)->GetStaticField(0x412C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex)->GetStaticField(0x412D0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_7()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex)->GetStaticField(0x412D8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtensionData_Class_3_77020D86207BDBF9_TypeDefinitionIndex)->GetStaticField(0x412E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::UIControllerExtensionData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::UIControllerExtensionData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_CLASS_3_77020D86207BDBF9_WRITE_OFFSET))(this, a1, a2);
	}
};
