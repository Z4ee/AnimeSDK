#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UICONTROLLEREXTENSIONDATA_GETBOOLDATA_OFFSET UNITYSDK_OFFSET(0x18C5C230)
#define UICONTROLLEREXTENSIONDATA_GETCOLORDATA_OFFSET UNITYSDK_OFFSET(0x18C5C400)
#define UICONTROLLEREXTENSIONDATA_GETFLOATDATA_OFFSET UNITYSDK_OFFSET(0x18C5C140)
#define UICONTROLLEREXTENSIONDATA_GETINTDATA_OFFSET UNITYSDK_OFFSET(0x18C5C050)
#define UICONTROLLEREXTENSIONDATA_GETSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x18C5C320)
#define UICONTROLLEREXTENSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5C530)

inline static constexpr unsigned int UIControllerExtensionData_TypeDefinitionIndex = 90266;

class UIControllerExtensionData : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _intData; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _floatData; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* _boolData; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _stringData; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* _colorData; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> GetIntData(::System::String* key)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_GETINTDATA_OFFSET))(this, key);
	}

	::System::Nullable_1<::System::Single> GetFloatData(::System::String* key)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_GETFLOATDATA_OFFSET))(this, key);
	}

	::System::Nullable_1<::System::Boolean> GetBoolData(::System::String* key)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_GETBOOLDATA_OFFSET))(this, key);
	}

	::System::String* GetStringData(::System::String* key)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_GETSTRINGDATA_OFFSET))(this, key);
	}

	::System::Nullable_1<::UnityEngine::Color> GetColorData(::System::String* key)
	{
		return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_GETCOLORDATA_OFFSET))(this, key);
	}
};
