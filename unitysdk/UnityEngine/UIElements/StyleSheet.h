#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/Dimension.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/ScalableImage.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueFunction.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueKeyword.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleRule; }

#define UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET UNITYSDK_OFFSET(0x1BBF1B20)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0x1BBF1AF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET UNITYSDK_OFFSET(0x1BBF1150)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BBF1B10)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BBF24B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET UNITYSDK_OFFSET(0x1BBF1FE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET UNITYSDK_OFFSET(0x1BBF1E30)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET UNITYSDK_OFFSET(0x1BBF21E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET UNITYSDK_OFFSET(0x1BBF1C90)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1BBF25B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BBF25A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BBF1C80)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1BBF23C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1BBF2740)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET UNITYSDK_OFFSET(0x1BBF20F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BBF22D0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET UNITYSDK_OFFSET(0x1BBF1170)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0x1BBF1B00)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET UNITYSDK_OFFSET(0x1BBF1160)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BBF2520)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET UNITYSDK_OFFSET(0x1BBF2070)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET UNITYSDK_OFFSET(0x1BBF1EF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET UNITYSDK_OFFSET(0x1BBF2250)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET UNITYSDK_OFFSET(0x1BBF1D50)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1BBF2430)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET UNITYSDK_OFFSET(0x1BBF2160)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BBF2340)
#define UNITYENGINE_UIELEMENTS_STYLESHEET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF2830)
#define UNITYENGINE_UIELEMENTS_STYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF27D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSheet_TypeDefinitionIndex = 27602;

	class StyleSheet : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::String** StaticGet_kCustomPropertyMarker()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StyleSheet_TypeDefinitionIndex)->GetStaticField(0x225E0);
		}
		::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* m_Rules; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* m_ComplexSelectors; // 0x20
		::Il2CppArray<::System::Single>* floats; // 0x28
		::Il2CppArray<::UnityEngine::UIElements::StyleSheets::Dimension>* dimensions; // 0x30
		::Il2CppArray<::UnityEngine::Color>* colors; // 0x38
		::Il2CppArray<::System::String*>* strings; // 0x40
		::Il2CppArray<::UnityEngine::Object*>* assets; // 0x48
		::Il2CppArray<::UnityEngine::UIElements::StyleSheets::ScalableImage>* scalableImages; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedNameSelectors; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedTypeSelectors; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedClassSelectors; // 0x68
		::System::Boolean isUnityStyleSheet; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* get_rules()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET))(this);
		}

		::System::Void set_rules(::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleRule*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* get_complexSelectors()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET))(this);
		}

		::System::Void set_complexSelectors(::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET))(this);
		}

		::System::Void SetupReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::UIElements::StyleValueKeyword(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET))(this, handle);
		}

		::System::Single ReadFloat(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET))(this, handle);
		}

		::System::Boolean TryReadFloat(::UnityEngine::UIElements::StyleValueHandle handle, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET))(this, handle, value);
		}

		::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::UIElements::StyleSheets::Dimension(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET))(this, handle);
		}

		::System::Boolean TryReadDimension(::UnityEngine::UIElements::StyleValueHandle handle, ::UnityEngine::UIElements::StyleSheets::Dimension& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::UIElements::StyleSheets::Dimension&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET))(this, handle, value);
		}

		::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET))(this, handle);
		}

		::System::Boolean TryReadColor(::UnityEngine::UIElements::StyleValueHandle handle, ::UnityEngine::Color& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET))(this, handle, value);
		}

		::System::String* ReadString(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET))(this, handle);
		}

		::System::Boolean TryReadString(::UnityEngine::UIElements::StyleValueHandle handle, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET))(this, handle, value);
		}

		::System::String* ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET))(this, handle);
		}

		::System::Boolean TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET))(this, handle, value);
		}

		::System::String* ReadVariable(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET))(this, handle);
		}

		::System::Boolean TryReadVariable(::UnityEngine::UIElements::StyleValueHandle handle, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET))(this, handle, value);
		}

		::System::String* ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET))(this, handle);
		}

		::System::Boolean TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET))(this, handle, value);
		}

		::UnityEngine::Object* ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET))(this, handle);
		}

		::System::Boolean TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle, ::UnityEngine::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET))(this, handle, value);
		}

		::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::UIElements::StyleValueFunction(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET))(this, handle);
		}

		::System::String* ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET))(this, handle);
		}

		::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle)
		{
			return ((::UnityEngine::UIElements::StyleSheets::ScalableImage(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET))(this, handle);
		}

		static ::System::Boolean CustomStartsWith(::System::String* originalString, ::System::String* pattern)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET))(originalString, pattern);
		}
	};
}
