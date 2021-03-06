template <>
inline std::shared_ptr <sf::Texture> ResourceManager::load <sf::Texture> (const ID& name, const thor::ResourceKey <sf::Texture>& key)
{
    return m_textureHolder.load(name, key);
}

template <>
inline std::shared_ptr <sf::Shader> ResourceManager::load <sf::Shader> (const ID& name, const thor::ResourceKey <sf::Shader>& key)
{
    return m_shaderHolder.load(name, key);
}

template <>
inline std::shared_ptr <tgui::Gui> ResourceManager::load <tgui::Gui> (const ID& name, const thor::ResourceKey <tgui::Gui>& key)
{
    return m_guiHolder.load(name, key);
}

template <>
inline std::shared_ptr <sf::Font> ResourceManager::load <sf::Font> (const ID& name, const thor::ResourceKey <sf::Font>& key)
{
    return m_fontHolder.load(name, key);
}

template <>
inline std::shared_ptr <tmx::MapLoader> ResourceManager::load <tmx::MapLoader> (const ID& name, const thor::ResourceKey <tmx::MapLoader>& key)
{
    return m_mapHolder.load(name, key);
}

inline tmx::MapLoader* ResourceManager::loadTileMap(const ID& name, const std::string& mapname)
{
    return load <tmx::MapLoader> (name, res::tileMapKey(mapname)).get();
}
/*
inline b2World* ResourceManager::createWorld(int gravx, int gravy)
{
    m_worldHolder = std::make_shared <b2World> (b2Vec2(gravx, gravy));
    return m_worldHolder.get();
}*/