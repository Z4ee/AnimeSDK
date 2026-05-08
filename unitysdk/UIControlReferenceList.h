#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define UICONTROLREFERENCELIST_GETGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x17926490)
#define UICONTROLREFERENCELIST_GETIMAGES_OFFSET UNITYSDK_OFFSET(0x17926590)
#define UICONTROLREFERENCELIST_GETTEXTS_OFFSET UNITYSDK_OFFSET(0x17926520)
#define UICONTROLREFERENCELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17926600)

inline static constexpr unsigned int UIControlReferenceList_TypeDefinitionIndex = 39954;

class UIControlReferenceList : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::GameObject*>* m_list; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_gameObjectList; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*>* m_dict; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLREFERENCELIST__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetGameObjects()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLREFERENCELIST_GETGAMEOBJECTS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* GetTexts()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLREFERENCELIST_GETTEXTS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* GetImages()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLREFERENCELIST_GETIMAGES_OFFSET))(this);
	}
};
