#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextGenerationError.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E6C7AB0)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6C83A0)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1E6C8390)
#define UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET UNITYSDK_OFFSET(0x1E6C97B0)
#define UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6C83C0)
#define UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET UNITYSDK_OFFSET(0x1E6C83B0)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E6C8780)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E6C83F0)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6C83E0)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1E6C83D0)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E6C7D20)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6C7D40)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0x1E6C96D0)
#define UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1E6C9780)
#define UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0x1E6C9770)
#define UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET UNITYSDK_OFFSET(0x1E6C9710)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6C9750)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET UNITYSDK_OFFSET(0x1E6C8740)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6C9760)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET UNITYSDK_OFFSET(0x1E6C9690)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6C7AA0)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E6C7D10)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E6C8380)
#define UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET UNITYSDK_OFFSET(0x1E6C8DC0)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1E6C8970)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1E6C8CB0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E6C93D0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6C97A0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6C9790)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET UNITYSDK_OFFSET(0x1E6C85E0)
#define UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6C7CA0)
#define UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E6C7D50)
#define UNITYENGINE_TEXTGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C97C0)
#define UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C7720)
#define UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7710)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 6362;

	class TextGenerator : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet_s_UIVertexListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5840);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet_s_UILineInfoListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5848);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet_s_UICharInfoListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5850);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>** StaticGet_s_UILineInfoListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5858);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>** StaticGet_s_UIVertexListAllocFromPool()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5860);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>** StaticGet_s_UICharInfoListReleaseToPool()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(TextGenerator_TypeDefinitionIndex)->GetStaticField(0x5868);
		}
		::System::IntPtr m_Ptr; // 0x10
		::System::String* m_LastString; // 0x18
		::UnityEngine::TextGenerationSettings m_LastSettings; // 0x20
		::System::Boolean m_HasGenerated; // 0x80
		::UnityEngine::TextGenerationError m_LastValid; // 0x84
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* m_Verts; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* m_Characters; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* m_Lines; // 0x98
		::System::Boolean m_CachedVerts; // 0xA0
		::System::Boolean m_CachedCharacters; // 0xA1
		::System::Boolean m_CachedLines; // 0xA2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CTOR_1_OFFSET))(this, initialCapacity);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_characterCountVisible()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET))(this, settings);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET))(this);
		}

		::System::Void GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET))(this, characters);
		}

		::System::Void GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* lines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET))(this, lines);
		}

		::System::Void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET))(this, vertices);
		}

		::System::Single GetPreferredWidth(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET))(this, str, settings);
		}

		::System::Single GetPreferredHeight(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET))(this, str, settings);
		}

		::System::Boolean PopulateWithErrors(::System::String* str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET))(this, str, settings, context);
		}

		::System::Boolean Populate(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET))(this, str, settings);
		}

		::UnityEngine::TextGenerationError PopulateWithError(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET))(this, str, settings);
		}

		::UnityEngine::TextGenerationError PopulateAlways(::System::String* str, ::UnityEngine::TextGenerationSettings settings)
		{
			return ((::UnityEngine::TextGenerationError(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET))(this, str, settings);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_verts()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* get_characters()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* get_lines()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET))(this);
		}

		::UnityEngine::Rect get_rectExtents()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_characterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_lineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET))(this);
		}

		::System::Int32 get_fontSizeUsedForBestFit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_FONTSIZEUSEDFORBESTFIT_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET))();
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		::System::Boolean Populate_Internal(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
		}

		::System::Boolean Populate_Internal_1(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::UnityEngine::VerticalWrapMode verticalOverFlow, ::UnityEngine::HorizontalWrapMode horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::UnityEngine::Vector2 extents, ::UnityEngine::Vector2 pivot, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::UnityEngine::TextGenerationError& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::VerticalWrapMode, ::UnityEngine::HorizontalWrapMode, ::System::Boolean, ::UnityEngine::TextAnchor, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextGenerationError&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_1_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extents, pivot, generateOutOfBounds, alignByGeometry, error);
		}

		::Il2CppArray<::UnityEngine::UILineInfo>* GetLinesArray()
		{
			return ((::Il2CppArray<::UnityEngine::UILineInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESARRAY_OFFSET))(this);
		}

		::System::Void GetVerticesInternal(::System::Object* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET))(this, vertices);
		}

		::System::Void GetCharactersInternal(::System::Object* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET))(this, characters);
		}

		::System::Void GetLinesInternal(::System::Object* lines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET))(this, lines);
		}

		::System::Void get_rectExtents_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean Populate_Internal_Injected(::System::String* str, ::UnityEngine::Font* font, ::UnityEngine::Color& color, ::System::Int32 fontSize, ::System::Single scaleFactor, ::System::Single lineSpacing, ::UnityEngine::FontStyle style, ::System::Boolean richText, ::System::Boolean resizeTextForBestFit, ::System::Int32 resizeTextMinSize, ::System::Int32 resizeTextMaxSize, ::System::Int32 verticalOverFlow, ::System::Int32 horizontalOverflow, ::System::Boolean updateBounds, ::UnityEngine::TextAnchor anchor, ::System::Single extentsX, ::System::Single extentsY, ::System::Single pivotX, ::System::Single pivotY, ::System::Boolean generateOutOfBounds, ::System::Boolean alignByGeometry, ::System::UInt32& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color&, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
		}
	};
}
