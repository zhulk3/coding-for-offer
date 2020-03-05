CMYString& CMYString::operator=(CMYString& str){
    if(str==this){
        return this;
    }
    delete []m_data;
    m_data=new(strlen(str.m_data)+1);
    strcpy(m_data,str.m_data);
    return this;
}