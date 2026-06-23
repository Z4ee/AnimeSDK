#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LinkInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_Offset.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_StyleParseState.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_APPLYTAGTOSTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1AEAD350)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1AEAEE80)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1AEAEF80)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_GETATTRIBUTEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AEAED50)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXCHARSTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1AEAE600)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1AEAEF20)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_ISHEXCHAR_OFFSET UNITYSDK_OFFSET(0x1AEAE5A0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AEADAA0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1AEAE390)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEAF1A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RichTagParseUtils_TypeDefinitionIndex = 44339;

	class RichTagParseUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_s_attributeParams()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RichTagParseUtils_TypeDefinitionIndex)->GetStaticField(0x3D4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void ApplyTagToStyleState(::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::String* preprocessedText, ::System::String* txt, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>* links, ::UnityEngine::UI::Extension::NAP_StyleParseState& s, ::System::Int32 currentGi)
		{
			return ((::System::Void(*)(::Struct_2_97F90E6FB4F6D559, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>*, ::UnityEngine::UI::Extension::NAP_StyleParseState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_APPLYTAGTOSTYLESTATE_OFFSET))(tagInfo, preprocessedText, txt, links, s, currentGi);
		}

		static ::System::Void ParseMarkAttributes(::System::String* src, ::System::Int32 start, ::System::Int32 length, ::System::Single fontSize, ::UnityEngine::Color32& color, ::UnityEngine::UI::Extension::NAP_Offset& padding)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Color32&, ::UnityEngine::UI::Extension::NAP_Offset&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_OFFSET))(src, start, length, fontSize, color, padding);
		}

		static ::System::Single ParseSizeValue(::System::String* src, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_OFFSET))(src, start, length);
		}

		static ::System::Int32 HexToInt(::System::Char hex)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXTOINT_OFFSET))(hex);
		}

		static ::UnityEngine::Color32 HexCharsToColor(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::UnityEngine::Color32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXCHARSTOCOLOR_OFFSET))(src, startIndex, length);
		}

		static ::System::Single ConvertToFloat(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length, ::System::Int32& lastIndex)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_OFFSET))(src, startIndex, length, lastIndex);
		}

		static ::System::Single ConvertToFloat_1(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_1_OFFSET))(src, startIndex, length);
		}

		static ::System::Int32 GetAttributeParameters(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length, ::Il2CppArray<::System::Single>*& parameters)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_GETATTRIBUTEPARAMETERS_OFFSET))(src, startIndex, length, parameters);
		}

		static ::System::Boolean IsHexChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_ISHEXCHAR_OFFSET))(c);
		}
	};
}
